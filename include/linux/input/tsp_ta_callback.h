#ifndef _TSP_TA_CALLBACK_H_
#define _TSP_TA_CALLBACK_H_

#ifdef CONFIG_EXTCON
#include <linux/extcon.h>
#undef USE_TSP_TA_CALLBACKS
#define CHARGER_NOTIFIER
#else

/* Model define */
#if defined(CONFIG_SEC_GRANDMAX_PROJECT)  || defined(CONFIG_SEC_FORTUNA_PROJECT) \
	|| defined(CONFIG_SEC_E5_PROJECT) || defined(CONFIG_SEC_A3_PROJECT) \
	|| defined(CONFIG_SEC_A5_PROJECT) || defined(CONFIG_SEC_K5_PROJECT) \
	|| defined(CONFIG_SEC_H7_PROJECT) || defined(CONFIG_SEC_A8_PROJECT) \
	|| defined(CONFIG_SEC_A7_PROJECT)
#define USE_TSP_TA_CALLBACKS
#else	/* default */
#undef USE_TSP_TA_CALLBACKS
#endif

#endif	/* CONFIG_EXTCON */

#ifdef USE_TSP_TA_CALLBACKS
extern struct tsp_callbacks *charger_callbacks;
struct tsp_callbacks {
	void (*inform_charger)(struct tsp_callbacks *, int);
};
#endif

#ifdef CHARGER_NOTIFIER
struct extcon_tsp_ta_cable {
	    struct work_struct work;
	    struct notifier_block nb;
	    struct extcon_specific_cable_nb extcon_nb;
	    struct extcon_dev *edev;
	    enum extcon_cable_name cable_type;
	    int cable_state;
};
#endif

#endif /* _TSP_TA_CALLBACK_H_ */
