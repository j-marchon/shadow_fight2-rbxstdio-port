// TypeDefIndex 3353
// Namespace: 
// public class EPFMFHDGMCE.HOEHCNPOOFD
// Fields:
//   public EPFMFHDGMCE.OKDNMACPDFA BGHFADDGPAD; // 0x10
//   public string JIJLBFGKNJK; // 0x18
//   public int NOPGBJNLFHM; // 0x20

// ===== public void .ctor(EPFMFHDGMCE.OKDNMACPDFA JDNKKGPNHPB, string DEKCPPOJFEH, int GHPHFGBIPCI)  [RVA 0x35367F4]
// EPFMFHDGMCE.HOEHCNPOOFD$$.ctor @ RVA 0x35367F4

void EPFMFHDGMCE_HOEHCNPOOFD___ctor
               (EPFMFHDGMCE_HOEHCNPOOFD_o *__this,int32_t JDNKKGPNHPB,System_String_o *DEKCPPOJFEH,
               int32_t GHPHFGBIPCI,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields).JIJLBFGKNJK;
  *ppSVar1 = DEKCPPOJFEH;
  (__this->fields).BGHFADDGPAD = JDNKKGPNHPB;
  thunk_FUN_01c20e04(ppSVar1,DEKCPPOJFEH);
  (__this->fields).NOPGBJNLFHM = GHPHFGBIPCI;
  return;
}


// ===== public bool OPLOPKCLGPC()  [RVA 0x35385BC]
// EPFMFHDGMCE.HOEHCNPOOFD$$OPLOPKCLGPC @ RVA 0x35385BC

bool EPFMFHDGMCE_HOEHCNPOOFD__OPLOPKCLGPC(EPFMFHDGMCE_HOEHCNPOOFD_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  NFGLEDADCGL_o *__this_00;
  HNFFPPPDKDK_o *pHVar3;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  ACHLOMELAJE_o *pAVar4;
  
  if ((DAT_04568aa8 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04568aa8 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar4 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if ((pAVar4 != (ACHLOMELAJE_o *)0x0) &&
     (__this_00 = (pAVar4->fields).CKJAGLDEMAE, __this_00 != (NFGLEDADCGL_o *)0x0)) {
    pHVar3 = NFGLEDADCGL__MCGJLCLKDNP(__this_00,(__this->fields).JIJLBFGKNJK,(MethodInfo *)0x0);
    iVar1 = (__this->fields).BGHFADDGPAD;
    if (iVar1 == 1) {
      if (pHVar3 == (HNFFPPPDKDK_o *)0x0) {
        bVar2 = true;
      }
      else {
        bVar2 = (__this->fields).NOPGBJNLFHM <= (pHVar3->fields).GHPHFGBIPCI;
      }
    }
    else {
      bVar2 = false;
      if ((iVar1 == 2) && (pHVar3 != (HNFFPPPDKDK_o *)0x0)) {
        if (pHVar3 == (HNFFPPPDKDK_o *)0x0) goto LAB_036386b4;
        bVar2 = (pHVar3->fields).GHPHFGBIPCI <= (__this->fields).NOPGBJNLFHM;
      }
    }
    return bVar2;
  }
LAB_036386b4:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

