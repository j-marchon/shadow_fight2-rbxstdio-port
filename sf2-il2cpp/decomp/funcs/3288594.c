// Nekki.SF2.GUI.Dialogs.LotteryDialog$$HMBAGCOBBID @ RVA 0x3288594

void Nekki_SF2_GUI_Dialogs_LotteryDialog__HMBAGCOBBID
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_Collections_Generic_List_DILGLGMKOFG__o *pSVar3;
  Il2CppObject *item;
  EnhancedUI_EnhancedScroller_EnhancedScroller_o *__this_00;
  MethodInfo *extraout_x1;
  int index;
  Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *pNVar4;
  Il2CppClass *a;
  
  if ((DAT_045672ce & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_get_Item__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_045672ce = 1;
    method = extraout_x1;
  }
  pNVar4 = (__this->fields).NAJKNFGDGGI;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pNVar4 = (__this->fields).NAJKNFGDGGI;
  if (pNVar4 != (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *)0x0) {
    pSVar2 = Nekki_SF2_GUI_Dialogs_LotteryDialogCell__get_CancellingItem(pNVar4,(MethodInfo *)0x0);
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar2,(MethodInfo *)0x0);
    if (bVar1) {
      return;
    }
    pSVar3 = (__this->fields).HPJNLAOAJJE;
    if (pSVar3 != (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) {
      index = (pSVar3->fields)._size + -1;
      if (index < 0) {
LAB_033886d4:
        __this_00 = (__this->fields).Scroller;
        if (__this_00 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) {
          EnhancedUI_EnhancedScroller_EnhancedScroller__ReloadData(__this_00,0.0,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        do {
          item = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar3,index,
                            Method_System_Collections_Generic_List<DILGLGMKOFG>_get_Item__);
          if ((item == (Il2CppObject *)0x0) ||
             (pNVar4 = (__this->fields).NAJKNFGDGGI,
             pNVar4 == (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *)0x0)) break;
          a = item[5].klass;
          pSVar2 = Nekki_SF2_GUI_Dialogs_LotteryDialogCell__get_CancellingItem
                             (pNVar4,(MethodInfo *)0x0);
          bVar1 = System_String__op_Equality((System_String_o *)a,pSVar2,(MethodInfo *)0x0);
          if (bVar1) {
            pSVar3 = (__this->fields).HPJNLAOAJJE;
            if (pSVar3 == (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0) break;
            System_Collections_Generic_List<object>__Remove
                      ((System_Collections_Generic_List_object__o *)pSVar3,item,
                       Method_System_Collections_Generic_List<DILGLGMKOFG>_Remove__);
          }
          index = index + -1;
          if (index < 0) goto LAB_033886d4;
          pSVar3 = (__this->fields).HPJNLAOAJJE;
        } while (pSVar3 != (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

