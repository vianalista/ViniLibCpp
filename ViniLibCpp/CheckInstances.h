/* 
 * File:   CheckInstances.h
 * Author: vinicius
 *
 * Created on 24 de Setembro de 2015, 17:31
 */

#ifndef CHECKINSTANCES_H
#define	CHECKINSTANCES_H

class CCheckInstances {
public:
    static int quantity;

    CCheckInstances()  {quantity++;};
    ~CCheckInstances() {quantity--;};
};

void VerifyInstances(void);

#endif	/* CHECKINSTANCES_H */

