// NJNCPNBIPCD$$KDHOEOKEIMP @ RVA 0x313A4D4

void NJNCPNBIPCD__KDHOEOKEIMP(NJNCPNBIPCD_o *__this,KDADMJGPAOM_o *LJJOMPLONBH,MethodInfo *method)

{
  int32_t iVar1;
  NJNCPNBIPCD_c *method_00;
  MethodInfo *in_x3;
  int iVar2;
  KJNCNBJIJPC_o *pKVar3;
  
  if ((DAT_04566723 & 1) == 0) {
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    DAT_04566723 = 1;
  }
  if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (DAT_04565ff1 == '\0') {
    FUN_01bab630(&NJNCPNBIPCD_TypeInfo);
    DAT_04565ff1 = '\x01';
  }
  if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  if (NJNCPNBIPCD_TypeInfo->static_fields->_EGONDPGBNLJ_k__BackingField != false) {
    UnityEngine_Time__set_timeScale(1.0,(MethodInfo *)0x0);
    iVar2 = (__this->fields).HMDOBHEEHKM;
    if (iVar2 < 1) {
      if (LJJOMPLONBH == (KDADMJGPAOM_o *)0x0) goto LAB_0323a604;
      iVar2 = (LJJOMPLONBH->fields).PDGEHKCPGDK;
      (__this->fields).HMDOBHEEHKM = iVar2;
    }
    pKVar3 = (__this->fields).LEDBMKOBNDM;
    if (pKVar3 != (KJNCNBJIJPC_o *)0x0) {
      if (LJJOMPLONBH != (KDADMJGPAOM_o *)0x0) {
        NJNCPNBIPCD__AAPDAPFJOCB
                  (__this,(pKVar3->fields).OLGJBKMCGIC + (pKVar3->fields).OJBIFDEEBNO,
                   iVar2 - (LJJOMPLONBH->fields).PDGEHKCPGDK,in_x3);
        iVar1 = (LJJOMPLONBH->fields).PDGEHKCPGDK;
        (__this->fields).LEDBMKOBNDM = (KJNCNBJIJPC_o *)0x0;
        (__this->fields).HMDOBHEEHKM = iVar1;
        thunk_FUN_01c20e04(&__this->fields,0);
        (__this->fields).FDCEMGNCPCI = (__this->fields).FDCEMGNCPCI + 1;
        method_00 = NJNCPNBIPCD_TypeInfo;
        if ((NJNCPNBIPCD_TypeInfo->_2).cctor_finished == 0) {
          method_00 = (NJNCPNBIPCD_c *)thunk_FUN_01ba7564();
        }
        NJNCPNBIPCD__GNIBFOOLMHK((MethodInfo *)method_00);
        return;
      }
LAB_0323a604:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
  }
  return;
}

