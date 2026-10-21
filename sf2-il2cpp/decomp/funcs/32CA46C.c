// Nekki.SF2.GUI.Map.LampsPanel$$FKJDCPIAFLK @ RVA 0x32CA46C

void Nekki_SF2_GUI_Map_LampsPanel__FKJDCPIAFLK
               (Nekki_SF2_GUI_Map_LampsPanel_o *__this,
               System_Collections_Generic_List_Button__o *ACDNINGOMHO,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  MOAHCJAFGNJ_c *pMVar3;
  Il2CppObject *pIVar4;
  MOAHCJAFGNJ_NEEADEALBAI_o *pMVar5;
  int iVar6;
  
  if ((DAT_04567512 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Button>_get_Item__);
    FUN_01bab630(&MOAHCJAFGNJ_TypeInfo);
    DAT_04567512 = 1;
  }
  if ((MOAHCJAFGNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar3 = MOAHCJAFGNJ_TypeInfo;
  pMVar5 = MOAHCJAFGNJ_TypeInfo->static_fields->HLGBDNJJIMH;
  if (pMVar5 != (MOAHCJAFGNJ_NEEADEALBAI_o *)0x0) {
    uVar1 = (pMVar5->fields).NJAMIACMNCG;
    if (0 < (int)uVar1) {
      iVar6 = (__this->fields).GJNBBEBNALP;
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = 0xff / uVar1;
      }
      if ((__this->fields).ABNHKOFADPD == false) {
        iVar6 = iVar6 + uVar2;
        (__this->fields).GJNBBEBNALP = iVar6;
        if (0xfe < iVar6) {
          (__this->fields).GJNBBEBNALP = 0xff;
          (__this->fields).ABNHKOFADPD = true;
          if ((pMVar3->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
            pMVar5 = MOAHCJAFGNJ_TypeInfo->static_fields->HLGBDNJJIMH;
            if (pMVar5 == (MOAHCJAFGNJ_NEEADEALBAI_o *)0x0) goto LAB_033ca5d0;
          }
          (__this->fields).FAOGPCBDLCE = (pMVar5->fields).LDKIEDOLMPM;
        }
      }
      else {
        iVar6 = iVar6 - uVar2;
        (__this->fields).GJNBBEBNALP = iVar6;
        if (iVar6 < 1) {
          (__this->fields).GJNBBEBNALP = 0;
          (__this->fields).ABNHKOFADPD = false;
        }
      }
      if (ACDNINGOMHO == (System_Collections_Generic_List_Button__o *)0x0) goto LAB_033ca5d0;
      if (0 < (ACDNINGOMHO->fields)._size) {
        iVar6 = 0;
        do {
          pIVar4 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)ACDNINGOMHO,iVar6,
                              Method_System_Collections_Generic_List<Button>_get_Item__);
          if (pIVar4 == (Il2CppObject *)0x0) goto LAB_033ca5d0;
          LJLLAKHOFFF__IFBBIDIEBEL
                    ((UnityEngine_UI_Graphic_o *)pIVar4[0xe].klass,
                     (float)(__this->fields).GJNBBEBNALP / 255.0,(MethodInfo *)0x0);
          iVar6 = iVar6 + 1;
        } while (iVar6 < (ACDNINGOMHO->fields)._size);
      }
    }
    return;
  }
LAB_033ca5d0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

