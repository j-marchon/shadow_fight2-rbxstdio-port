// Nekki.SF2.GUI.Map.LampsPanel$$AGHFDDGCCJN @ RVA 0x32C9634

void Nekki_SF2_GUI_Map_LampsPanel__AGHFDDGCCJN
               (Nekki_SF2_GUI_Map_LampsPanel_o *__this,
               System_Collections_Generic_List_ResolutionImage__o *BKDABHMAPDK,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  MOAHCJAFGNJ_c *pMVar3;
  UnityEngine_Component_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_UI_Graphic_o *DAHDMONMPFJ;
  MOAHCJAFGNJ_NEEADEALBAI_o *pMVar4;
  int iVar5;
  
  if ((DAT_04567509 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ResolutionImage>_get_Item__);
    FUN_01bab630(&MOAHCJAFGNJ_TypeInfo);
    DAT_04567509 = 1;
  }
  if ((MOAHCJAFGNJ_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pMVar3 = MOAHCJAFGNJ_TypeInfo;
  pMVar4 = MOAHCJAFGNJ_TypeInfo->static_fields->HLGBDNJJIMH;
  if (pMVar4 != (MOAHCJAFGNJ_NEEADEALBAI_o *)0x0) {
    uVar1 = (pMVar4->fields).NJAMIACMNCG;
    if (0 < (int)uVar1) {
      iVar5 = (__this->fields).NFBFPDJLJBG;
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = 0xff / uVar1;
      }
      if ((__this->fields).CHEKKHNGMMP == false) {
        iVar5 = iVar5 + uVar2;
        (__this->fields).NFBFPDJLJBG = iVar5;
        if (0xfe < iVar5) {
          (__this->fields).NFBFPDJLJBG = 0xff;
          (__this->fields).CHEKKHNGMMP = true;
          if ((pMVar3->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
            pMVar4 = MOAHCJAFGNJ_TypeInfo->static_fields->HLGBDNJJIMH;
            if (pMVar4 == (MOAHCJAFGNJ_NEEADEALBAI_o *)0x0) goto LAB_033c97bc;
          }
          (__this->fields).FAOGPCBDLCE = (pMVar4->fields).LDKIEDOLMPM;
        }
      }
      else {
        iVar5 = iVar5 - uVar2;
        (__this->fields).NFBFPDJLJBG = iVar5;
        if (iVar5 < 1) {
          (__this->fields).NFBFPDJLJBG = 0;
          (__this->fields).CHEKKHNGMMP = false;
        }
      }
      if (BKDABHMAPDK == (System_Collections_Generic_List_ResolutionImage__o *)0x0)
      goto LAB_033c97bc;
      if (0 < (BKDABHMAPDK->fields)._size) {
        iVar5 = 0;
        do {
          __this_00 = (UnityEngine_Component_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)BKDABHMAPDK,iVar5,
                                 Method_System_Collections_Generic_List<ResolutionImage>_get_Item__)
          ;
          if ((__this_00 == (UnityEngine_Component_o *)0x0) ||
             (__this_01 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0),
             __this_01 == (UnityEngine_GameObject_o *)0x0)) goto LAB_033c97bc;
          UnityEngine_GameObject__SetActive(__this_01,true,(MethodInfo *)0x0);
          DAHDMONMPFJ = (UnityEngine_UI_Graphic_o *)
                        System_Collections_Generic_List<object>__get_Item
                                  ((System_Collections_Generic_List_object__o *)BKDABHMAPDK,iVar5,
                                   Method_System_Collections_Generic_List<ResolutionImage>_get_Item__
                                  );
          LJLLAKHOFFF__IFBBIDIEBEL
                    (DAHDMONMPFJ,(float)(__this->fields).NFBFPDJLJBG / 255.0,(MethodInfo *)0x0);
          iVar5 = iVar5 + 1;
        } while (iVar5 < (BKDABHMAPDK->fields)._size);
      }
    }
    return;
  }
LAB_033c97bc:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

