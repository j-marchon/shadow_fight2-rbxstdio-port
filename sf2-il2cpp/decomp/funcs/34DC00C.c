// Nekki.SF2.GUI.Fight.EndRaidFightScreenBase$$Init @ RVA 0x34DC00C

void Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__Init
               (Nekki_SF2_GUI_Fight_EndRaidFightScreenBase_o *__this,IGPDCHBJAPD_o *PNPKEKHEMCD,
               MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  System_String_o **ppSVar3;
  IGPDCHBJAPD_o **ppIVar4;
  Nekki_SF2_GUI_ResolutionImage_o *pNVar5;
  float time;
  
  if ((DAT_04568717 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_10483);
    DAT_04568717 = 1;
  }
  ppIVar4 = &(__this->fields).KNEAEEIMDGH;
  *ppIVar4 = PNPKEKHEMCD;
  thunk_FUN_01c20e04(ppIVar4,PNPKEKHEMCD);
  pNVar5 = (__this->fields)._ResultHeader;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pNVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  method_00 = extraout_x1;
  if (bVar1) {
    if (*ppIVar4 != (IGPDCHBJAPD_o *)0x0) {
      bVar1 = IGPDCHBJAPD__DONKDCJLBPN(*ppIVar4,(MethodInfo *)0x0);
      if (*ppIVar4 != (IGPDCHBJAPD_o *)0x0) {
        bVar2 = IGPDCHBJAPD__GCJHFPGABKL(*ppIVar4,(MethodInfo *)0x0);
        pNVar5 = (__this->fields)._ResultHeader;
        if (bVar1) {
          ppSVar3 = &(__this->fields)._WinSpriteName;
        }
        else if (bVar2) {
          ppSVar3 = &(__this->fields)._TimesUpSpriteName;
        }
        else {
          ppSVar3 = &(__this->fields)._LoseSpriteName;
        }
        if (pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
          (pNVar5->fields)._TexturePath = *ppSVar3;
          thunk_FUN_01c20e04(&(pNVar5->fields)._TexturePath);
          (*(pNVar5->klass->vtable)._91_RefreshSprite.methodPtr)
                    (pNVar5,(pNVar5->klass->vtable)._91_RefreshSprite.method);
          pNVar5 = (__this->fields)._ResultHeader;
          if (pNVar5 != (Nekki_SF2_GUI_ResolutionImage_o *)0x0) {
            (*(pNVar5->klass->vtable)._45_SetNativeSize.methodPtr)
                      (pNVar5,(pNVar5->klass->vtable)._45_SetNativeSize.method);
            method_00 = extraout_x1_00;
            goto LAB_035dc118;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_035dc118:
  Nekki_SF2_GUI_Fight_EndRaidFightScreenBase__EAEOCPNBDME(__this,method_00);
  time = (__this->fields).ENDOPBGIIBE;
  UnityEngine_MonoBehaviour__InvokeRepeating
            ((UnityEngine_MonoBehaviour_o *)__this,StringLiteral_10483,time,time,(MethodInfo *)0x0);
  return;
}

