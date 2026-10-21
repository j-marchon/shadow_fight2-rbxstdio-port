// Nekki.SF2.GUI.Map.ContentBase$$.ctor @ RVA 0x322FB80

void Nekki_SF2_GUI_Map_ContentBase___ctor
               (Nekki_SF2_GUI_Map_ContentBase_o *__this,MethodInfo *method)

{
  System_Action_OOMHDDBCBJP__o **ppSVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  System_Action_OOMHDDBCBJP__o *pSVar2;
  
  if ((DAT_04566fc9 & 1) == 0) {
    FUN_01bab630(&System_Action<OOMHDDBCBJP>_TypeInfo);
                    /* try { // try from 0332fbb0 to 0342fbb7 has its CatchHandler @ 0332fc60 */
    FUN_01bab630(&Method_Nekki_SF2_GUI_Map_ContentBase_<>c_PEPDMAABEEK__);
    FUN_01bab630(&Nekki_SF2_GUI_Map_ContentBase_<>c_TypeInfo);
    DAT_04566fc9 = 1;
    method = extraout_x1;
  }
  if ((Nekki_SF2_GUI_Map_ContentBase_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_ContentBase_<>c_TypeInfo,method);
    method = extraout_x1_00;
  }
  pSVar2 = Nekki_SF2_GUI_Map_ContentBase_<>c_TypeInfo->static_fields->__9__1_0;
  if (pSVar2 == (System_Action_OOMHDDBCBJP__o *)0x0) {
                    /* try { // try from 0332fbf4 to 0342fc1f has its CatchHandler @ 0332fc64 */
    if ((Nekki_SF2_GUI_Map_ContentBase_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(Nekki_SF2_GUI_Map_ContentBase_<>c_TypeInfo,method);
    }
    pSVar2 = (System_Action_OOMHDDBCBJP__o *)thunk_FUN_01bda818(System_Action<OOMHDDBCBJP>_TypeInfo)
    ;
                    /* try { // try from 0332fc20 to 0342fc4f has its CatchHandler @ 0332fb0c */
    System_Action<object>___ctor();
    ppSVar1 = &Nekki_SF2_GUI_Map_ContentBase_<>c_TypeInfo->static_fields->__9__1_0;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
  }
  if (__this != (Nekki_SF2_GUI_Map_ContentBase_o *)0x0) {
    ppSVar1 = &(__this->fields).OnUpdateBattleInfo;
                    /* try { // try from 0332fc50 to 0342fc57 has its CatchHandler @ 0332fc5c */
    *ppSVar1 = pSVar2;
                    /* try { // try from 0332fc58 to 0342fc7f has its CatchHandler @ 0332fb0c */
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0332fc50 with catch @ 0332fc5c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0332fbb0 with catch @ 0332fc60
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0332fbf4 with catch @ 0332fc64
                        */
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

