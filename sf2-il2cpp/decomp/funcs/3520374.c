// Nekki.SF2.GUI.Fight.PlayerLifeBar$$SetHitBarValue @ RVA 0x3520374

void Nekki_SF2_GUI_Fight_PlayerLifeBar__SetHitBarValue
               (Nekki_SF2_GUI_Fight_PlayerLifeBar_o *__this,float CJNHFNHJHPE,int32_t ABKNPBMGHKH,
               MethodInfo *method)

{
                    /* catch() { ... } // from try @ 0362035c with catch @ 03620374 */
  (__this->fields).HFMAMOEIOOB = CJNHFNHJHPE;
                    /* catch() { ... } // from try @ 03620238 with catch @ 03620378 */
  (__this->fields).NHDMJMILNKJ = ABKNPBMGHKH;
                    /* catch() { ... } // from try @ 0362028c with catch @ 0362037c */
  if (ABKNPBMGHKH != 0) {
                    /* catch() { ... } // from try @ 03620204 with catch @ 03620380 */
    return;
  }
                    /* catch() { ... } // from try @ 03620354 with catch @ 03620384 */
  Nekki_SF2_GUI_Fight_PlayerLifeBar__ONHOMNIFFEN(__this,CJNHFNHJHPE,(MethodInfo *)0x0);
  return;
}

