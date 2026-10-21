// Nekki.SF2.GUI.SimpleScroll$$RollItemsSiblingOrder @ RVA 0x302E55C

void Nekki_SF2_GUI_SimpleScroll__RollItemsSiblingOrder
               (Nekki_SF2_GUI_SimpleScroll_o *__this,int32_t FIONJFAMAEJ,MethodInfo *method)

{
  bool bVar1;
  int32_t index;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  int iVar4;
  
  method_00 = (MethodInfo *)(ulong)(uint)FIONJFAMAEJ;
  if ((DAT_04565cd2 & 1) == 0) {
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_04565cd2 = 1;
    method_00 = extraout_x1;
  }
  if (FIONJFAMAEJ != 0) {
    bVar1 = (__this->fields).GNMNFMOHDMG.fields != (UnityEngine_Vector2_Fields)0x0;
    index = Nekki_SF2_GUI_SimpleScroll__LEJPCCHDLBN(__this,method_00);
    if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(System_Math_TypeInfo);
    }
    iVar4 = -FIONJFAMAEJ;
    if (-1 < FIONJFAMAEJ) {
      iVar4 = FIONJFAMAEJ;
    }
    iVar4 = iVar4 + -1;
    if (FIONJFAMAEJ < 0) {
      do {
        pUVar2 = (__this->fields).super.m_Content;
        if ((pUVar2 == (UnityEngine_RectTransform_o *)0x0) ||
           (pUVar3 = UnityEngine_Transform__GetChild
                               ((UnityEngine_Transform_o *)pUVar2,(uint)bVar1,(MethodInfo *)0x0),
           pUVar3 == (UnityEngine_Transform_o *)0x0)) goto LAB_0312e644;
        UnityEngine_Transform__SetSiblingIndex(pUVar3,index,(MethodInfo *)0x0);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
    else {
      do {
        pUVar2 = (__this->fields).super.m_Content;
        if ((pUVar2 == (UnityEngine_RectTransform_o *)0x0) ||
           (pUVar3 = UnityEngine_Transform__GetChild
                               ((UnityEngine_Transform_o *)pUVar2,index,(MethodInfo *)0x0),
           pUVar3 == (UnityEngine_Transform_o *)0x0)) {
LAB_0312e644:
                    /* WARNING: Subroutine does not return */
          FUN_01bab8c8();
        }
        UnityEngine_Transform__SetSiblingIndex(pUVar3,(uint)bVar1,(MethodInfo *)0x0);
        iVar4 = iVar4 + -1;
      } while (-1 < iVar4);
    }
  }
  return;
}

