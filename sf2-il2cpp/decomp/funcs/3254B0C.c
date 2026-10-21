// Nekki.SF2.GUI.Dialogs.Raids.MoveableChatSF$$.ctor @ RVA 0x3254B0C

void Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF___ctor
               (Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_CKLIGNAPKFO__ChatSFViewController__o *__this_00;
  System_Collections_Generic_Dictionary_CKLIGNAPKFO__ChatSFViewController__o **ppSVar1;
  System_Action_o **ppSVar2;
  MethodInfo *extraout_x1;
  System_Action_o *pSVar3;
  
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03354af4 with catch @ 03354b10
                       catch(type#2 @ 00000000) { ... } // from try @ 03354b08 with catch @ 03354b10
                        */
                    /* try { // try from 03354b14 to 03454bab has its CatchHandler @ 03354b14
                       catch() { ... } // from try @ 03354b14 with catch @ 03354b14
                       catch() { ... } // from try @ 03354bd0 with catch @ 03354b14
                       catch() { ... } // from try @ 03354c08 with catch @ 03354b14
                       catch() { ... } // from try @ 03354c34 with catch @ 03354b14
                       catch() { ... } // from try @ 03354c74 with catch @ 03354b14 */
  if ((DAT_04567156 & 1) == 0) {
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>__ctor__
                );
    FUN_01bab630(&System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>_TypeInfo)
    ;
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_<>c_DFOOGPBHOJB__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_<>c_TypeInfo);
    DAT_04567156 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_Dictionary_CKLIGNAPKFO__ChatSFViewController__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>_TypeInfo
                                 ,method);
  System_Collections_Generic_Dictionary<Int32Enum,_object>___ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             Method_System_Collections_Generic_Dictionary<CKLIGNAPKFO,_ChatSFViewController>__ctor__
            );
  ppSVar1 = &(__this->fields).KGPGGBPLEFB;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
                    /* try { // try from 03354bac to 03454bb3 has its CatchHandler @ 03354c18 */
  if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_<>c_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  pSVar3 = Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_<>c_TypeInfo->static_fields->__9__77_0;
  if (pSVar3 == (System_Action_o *)0x0) {
                    /* try { // try from 03354bc8 to 03454bcf has its CatchHandler @ 03354c14 */
    if ((Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_<>c_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03354bd0 to 03454bff has its CatchHandler @ 03354b14 */
      thunk_FUN_01ba7564();
    }
    pSVar3 = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
                    /* try { // try from 03354c00 to 03454c03 has its CatchHandler @ 03354c10 */
                    /* try { // try from 03354c04 to 03454c07 has its CatchHandler @ 03354c0c */
                    /* try { // try from 03354c08 to 03454c2f has its CatchHandler @ 03354b14 */
    System_Action___ctor();
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03354c04 with catch @ 03354c0c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03354c00 with catch @ 03354c10
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03354bc8 with catch @ 03354c14
                        */
    ppSVar2 = &Nekki_SF2_GUI_Dialogs_Raids_MoveableChatSF_<>c_TypeInfo->static_fields->__9__77_0;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03354bac with catch @ 03354c18
                        */
    *ppSVar2 = pSVar3;
    thunk_FUN_01c20e04(ppSVar2,pSVar3);
  }
  ppSVar2 = &(__this->fields).DAKAFGCLMPG;
  *ppSVar2 = pSVar3;
  thunk_FUN_01c20e04(ppSVar2,pSVar3);
                    /* try { // try from 03354c30 to 03454c33 has its CatchHandler @ 03354c5c */
                    /* try { // try from 03354c34 to 03454c6b has its CatchHandler @ 03354b14 */
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

