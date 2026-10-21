// TypeDefIndex 1970
// Namespace: 
// [CompilerGenerated]
// private sealed class LotteryDialog.BFGGHKOJHJP
// Fields:
//   public int index; // 0x10
//   public LotteryDialog.HHMLGMLPBOJ CS$<>8__locals1; // 0x18

// ===== internal void EJBJGMCAION()  [RVA 0x328E588]
// Nekki.SF2.GUI.Dialogs.LotteryDialog.BFGGHKOJHJP$$EJBJGMCAION @ RVA 0x328E588

void Nekki_SF2_GUI_Dialogs_LotteryDialog_BFGGHKOJHJP__EJBJGMCAION
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_BFGGHKOJHJP_o *__this,MethodInfo *method)

{
  int iVar1;
  EnhancedUI_EnhancedScroller_EnhancedScroller_o *pEVar2;
  int DHEJIHJMOGL;
  Nekki_SF2_GUI_Dialogs_LotteryDialog_HHMLGMLPBOJ_o *pNVar3;
  Nekki_SF2_GUI_Dialogs_LotteryDialog_o *pNVar4;
  Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *pNVar5;
  System_Collections_Generic_List_DILGLGMKOFG__o *pSVar6;
  
  if ((DAT_04567300 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<DILGLGMKOFG>_get_Count__);
    DAT_04567300 = 1;
  }
  pNVar3 = (__this->fields).CS___8__locals1;
  if (pNVar3 != (Nekki_SF2_GUI_Dialogs_LotteryDialog_HHMLGMLPBOJ_o *)0x0) {
    if ((pNVar3->fields).needReload == false) {
      return;
    }
    pNVar4 = (pNVar3->fields).__4__this;
    if ((pNVar4 != (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *)0x0) &&
       (pEVar2 = (pNVar4->fields).Scroller,
       pEVar2 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0)) {
      EnhancedUI_EnhancedScroller_EnhancedScroller__ReloadData(pEVar2,0.0,(MethodInfo *)0x0);
      pNVar3 = (__this->fields).CS___8__locals1;
      if ((pNVar3 != (Nekki_SF2_GUI_Dialogs_LotteryDialog_HHMLGMLPBOJ_o *)0x0) &&
         ((pNVar4 = (pNVar3->fields).__4__this,
          pNVar4 != (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *)0x0 &&
          (pSVar6 = (pNVar4->fields).HPJNLAOAJJE,
          pSVar6 != (System_Collections_Generic_List_DILGLGMKOFG__o *)0x0)))) {
        DHEJIHJMOGL = (__this->fields).index;
        iVar1 = (pSVar6->fields)._size;
        if (iVar1 <= DHEJIHJMOGL) {
          DHEJIHJMOGL = iVar1 + -1;
          (__this->fields).index = DHEJIHJMOGL;
        }
        pEVar2 = (pNVar4->fields).Scroller;
        if (pEVar2 != (EnhancedUI_EnhancedScroller_EnhancedScroller_o *)0x0) {
          EnhancedUI_EnhancedScroller_EnhancedScroller__JumpToDataIndex
                    (pEVar2,DHEJIHJMOGL,0.5,0.5,true,0,0.5,(System_Action_o *)0x0,0,false,
                     (MethodInfo *)0x0);
          pNVar3 = (__this->fields).CS___8__locals1;
          if (((pNVar3 != (Nekki_SF2_GUI_Dialogs_LotteryDialog_HHMLGMLPBOJ_o *)0x0) &&
              (pNVar4 = (pNVar3->fields).__4__this,
              pNVar4 != (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *)0x0)) &&
             (pNVar5 = (pNVar4->fields).NAJKNFGDGGI,
             pNVar5 != (Nekki_SF2_GUI_Dialogs_LotteryDialogCell_o *)0x0)) {
            LJLLAKHOFFF__IFBBIDIEBEL
                      ((UnityEngine_UI_Graphic_o *)(pNVar5->fields).super.SlotImage,1.0,
                       (MethodInfo *)0x0);
            pNVar3 = (__this->fields).CS___8__locals1;
            if ((pNVar3 != (Nekki_SF2_GUI_Dialogs_LotteryDialog_HHMLGMLPBOJ_o *)0x0) &&
               (pNVar4 = (pNVar3->fields).__4__this,
               pNVar4 != (Nekki_SF2_GUI_Dialogs_LotteryDialog_o *)0x0)) {
              (pNVar4->fields).OIKLOAGFFGO = 0;
              Nekki_SF2_GUI_Dialogs_LotteryDialog__PBDGFBENHDK(pNVar4,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x328E69C]
// Nekki.SF2.GUI.Dialogs.LotteryDialog.BFGGHKOJHJP$$.ctor @ RVA 0x328E69C

void Nekki_SF2_GUI_Dialogs_LotteryDialog_BFGGHKOJHJP___ctor
               (Nekki_SF2_GUI_Dialogs_LotteryDialog_BFGGHKOJHJP_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

