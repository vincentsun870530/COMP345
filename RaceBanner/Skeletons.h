//
// Created by vince on 2018/2/10.
//

#ifndef SMALLWORLD_SKELETONS_H
#define SMALLWORLD_SKELETONS_H


#include "RaceBanner.h"

class Skeletons : public RaceBanner{
public:
    Skeletons();

    ~Skeletons() override;

    Skeletons(const std::string &raceName_, const std::string &racePowerDescription_, int tokenAmount_);

    void setRaceName_(const std::string &raceName) override;

    void setSpecialPowerDescription_(const std::string &racePowerDescription) override;

    void setTokenAmount_(int tokenAmount_) override;

    int getTokenAmount_() override;

    const std::string getRaceName() override;

    const std::string getRacePowerName() override;

    int startRacePowerForVictoryCoin(int victoryCoin) override;

    void startRacePowerForToken(int tempToken) override;

    void show() override;
};


#endif //SMALLWORLD_SKELETONS_H
