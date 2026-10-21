// SFButton$$Update @ RVA 0x34BB5F8

void SFButton__Update(SFButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if ((DAT_045685d4 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045685d4 = 1;
  }
  bVar1 = LJLLAKHOFFF__JLOAEMBJNKP((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
  if (!bVar1) {
    pNVar2 = (__this->fields).FlashingImage;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar2 = (__this->fields).FlashingImage;
      if ((pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) &&
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pNVar2,(MethodInfo *)0x0),
         __this_00 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_00,(__this->fields).BDKMNPCCDNI,(MethodInfo *)0x0);
        if ((__this->fields).BDKMNPCCDNI == false) {
          return;
        }
        pNVar2 = (__this->fields).FlashingImage;
        if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          (*(pNVar2->klass->vtable)._22_get_color.methodPtr)
                    (pNVar2,(pNVar2->klass->vtable)._22_get_color.method);
          pNVar2 = (__this->fields).FlashingImage;
          if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
            (*(pNVar2->klass->vtable)._23_set_color.methodPtr)
                      (pNVar2,(pNVar2->klass->vtable)._23_set_color.method);
            fVar4 = (__this->fields).MLCOHBGHGKF;
            fVar5 = (__this->fields).JMCNNEEGMAK;
            if ((__this->fields).DBGMEKCEBCO == false) {
              fVar4 = fVar4 - fVar5;
              (__this->fields).MLCOHBGHGKF = fVar4;
              if (0.0 < fVar4) {
                return;
              }
              (__this->fields).DBGMEKCEBCO = true;
              (__this->fields).MLCOHBGHGKF = 0.0;
              return;
            }
            fVar3 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
            fVar4 = fVar4 + fVar5 * 60.0 * fVar3;
            (__this->fields).MLCOHBGHGKF = fVar4;
            if (fVar4 < 250.0) {
              return;
            }
            (__this->fields).MLCOHBGHGKF = 250.0;
            (__this->fields).DBGMEKCEBCO = false;
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

