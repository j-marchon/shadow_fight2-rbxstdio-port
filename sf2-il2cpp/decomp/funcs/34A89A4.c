// Nekki.SF2.GUI.Profile.UserPerksPanel$$Clear @ RVA 0x34A89A4

void Nekki_SF2_GUI_Profile_UserPerksPanel__Clear
               (Nekki_SF2_GUI_Profile_UserPerksPanel_o *__this,MethodInfo *method)

{
  int32_t length;
  Nekki_SF2_GUI_TableView_o *__this_00;
  Nekki_SF2_GUI_LabelAlias_o *__this_01;
  UnityEngine_GameObject_o *__this_02;
  System_Collections_Generic_List_EANNACPOJFA__o *pSVar1;
  EANNACPOJFA_o **ppEVar2;
  
  if ((DAT_0456850b & 1) == 0) {
                    /* try { // try from 035a89bc to 036a89e3 has its CatchHandler @ 035a8cd8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<EANNACPOJFA>_Clear__);
    DAT_0456850b = 1;
  }
  ppEVar2 = &(__this->fields).FKDJMGJDOAG;
  *ppEVar2 = (EANNACPOJFA_o *)0x0;
  thunk_FUN_01c20e04(ppEVar2,0);
  pSVar1 = (__this->fields).MHOLLBLFLAH;
  if (pSVar1 != (System_Collections_Generic_List_EANNACPOJFA__o *)0x0) {
    length = (pSVar1->fields)._size;
    (pSVar1->fields)._size = 0;
    (pSVar1->fields)._version = (pSVar1->fields)._version + 1;
    if (0 < length) {
                    /* try { // try from 035a8a00 to 036a8a0f has its CatchHandler @ 035a8cec */
      System_Array__Clear((System_Array_o *)(pSVar1->fields)._items,0,length,(MethodInfo *)0x0);
    }
    __this_00 = (__this->fields)._TableView;
    if (__this_00 != (Nekki_SF2_GUI_TableView_o *)0x0) {
      Nekki_SF2_GUI_TableView__ReloadData(__this_00,(MethodInfo *)0x0);
      __this_01 = (__this->fields)._NoPerksLabel;
                    /* try { // try from 035a8a28 to 036a8a2f has its CatchHandler @ 035a8ca0 */
      if ((__this_01 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) &&
         (__this_02 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
         __this_02 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_02,true,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035a8a48 to 036a8a53 has its CatchHandler @ 035a8ca4 */
  FUN_01bab8c8();
}

