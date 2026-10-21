// SFToggle$$Update @ RVA 0x30D56EC

void SFToggle__Update(SFToggle_o *__this,MethodInfo *method)

{
  bool bVar1;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar2;
  int iVar3;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar4;
  undefined8 uVar5;
  undefined8 in_d1;
  undefined1 in_q2 [16];
  
  if ((DAT_04566328 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566328 = 1;
  }
  bVar1 = LJLLAKHOFFF__JLOAEMBJNKP((UnityEngine_Behaviour_o *)__this,(MethodInfo *)0x0);
  if ((!bVar1) && ((__this->fields).BDKMNPCCDNI != false)) {
    pNVar4 = (__this->fields)._FlashingImage;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pNVar4 = (__this->fields)._FlashingImage;
      if (pNVar4 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
        uVar5 = (*(pNVar4->klass->vtable)._22_get_color.methodPtr)
                          (pNVar4,(pNVar4->klass->vtable)._22_get_color.method);
        pNVar2 = (__this->fields)._FlashingImage;
        if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          (*(pNVar2->klass->vtable)._22_get_color.methodPtr)
                    (pNVar2,(pNVar2->klass->vtable)._22_get_color.method);
          pNVar2 = (__this->fields)._FlashingImage;
          if (pNVar2 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
            (*(pNVar2->klass->vtable)._22_get_color.methodPtr)
                      (pNVar2,(pNVar2->klass->vtable)._22_get_color.method);
            (*(pNVar4->klass->vtable)._23_set_color.methodPtr)
                      (uVar5,in_d1,in_q2,(float)(__this->fields).MLCOHBGHGKF / 255.0,pNVar4,
                       (pNVar4->klass->vtable)._23_set_color.method);
            iVar3 = (__this->fields).MLCOHBGHGKF;
            if ((__this->fields).DBGMEKCEBCO == false) {
              if (iVar3 < 1) {
                (__this->fields).DBGMEKCEBCO = true;
                if (-1 < iVar3) {
                  return;
                }
                (__this->fields).MLCOHBGHGKF = 0;
                return;
              }
              iVar3 = iVar3 + -10;
            }
            else if (iVar3 < 0xfa) {
              iVar3 = iVar3 + 10;
            }
            else {
              (__this->fields).DBGMEKCEBCO = false;
              if (iVar3 == 0xfa) {
                return;
              }
              iVar3 = 0xfa;
            }
            (__this->fields).MLCOHBGHGKF = iVar3;
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

