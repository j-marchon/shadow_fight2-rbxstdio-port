// Nekki.SF2.GUI.Dialogs.NewsDialog$$PMPHFMLFFKA @ RVA 0x350DA50

void Nekki_SF2_GUI_Dialogs_NewsDialog__PMPHFMLFFKA
               (Nekki_SF2_GUI_Dialogs_NewsDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *pSVar1;
  JMDPBFOCHHP_ENBCJNLAHAC_o *LMMIEAICFHL;
  JMDPBFOCHHP_ENBCJNLAHAC_o *EAFJFDILLHK;
  System_Action_object__o *IELDNEAAPBE;
  
                    /* try { // try from 0360da54 to 0370da7b has its CatchHandler @ 0360dd5c */
  if ((DAT_045688dc & 1) == 0) {
    FUN_01bab630(&System_Action<object>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_get_Count__);
    FUN_01bab630(&Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_get_Item__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_NewsDialog_JFLKNDOKBLP__);
    FUN_01bab630(&StringLiteral_1);
                    /* try { // try from 0360dab0 to 0370dadb has its CatchHandler @ 0360dd58 */
    DAT_045688dc = 1;
  }
  pSVar1 = (__this->fields).MIALFHDFIKJ;
  if (pSVar1 != (System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *)0x0) {
    LMMIEAICFHL = (JMDPBFOCHHP_ENBCJNLAHAC_o *)
                  System_Collections_Generic_List<object>__get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar1,0,
                             Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_get_Item__
                            );
    pSVar1 = (__this->fields).MIALFHDFIKJ;
    if (pSVar1 != (System_Collections_Generic_List_JMDPBFOCHHP_ENBCJNLAHAC__o *)0x0) {
      if ((pSVar1->fields)._size < 2) {
        EAFJFDILLHK = (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0;
      }
      else {
        EAFJFDILLHK = (JMDPBFOCHHP_ENBCJNLAHAC_o *)
                      System_Collections_Generic_List<object>__get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar1,1,
                                 Method_System_Collections_Generic_List<JMDPBFOCHHP_ENBCJNLAHAC>_get_Item__
                                );
                    /* try { // try from 0360db18 to 0370db23 has its CatchHandler @ 0360dd50 */
      }
      IELDNEAAPBE = (System_Action_object__o *)thunk_FUN_01bda818(System_Action<object>_TypeInfo);
                    /* try { // try from 0360db28 to 0370db2f has its CatchHandler @ 0360dd4c */
      System_Action<object>___ctor();
                    /* try { // try from 0360db40 to 0370db47 has its CatchHandler @ 0360dd2c */
                    /* try { // try from 0360db58 to 0370db5f has its CatchHandler @ 0360dd30 */
                    /* try { // try from 0360db64 to 0370db6b has its CatchHandler @ 0360dd24 */
      JJPNLEPEAFM__FOMGGGJEKEA
                (LMMIEAICFHL,EAFJFDILLHK,IELDNEAAPBE,StringLiteral_1,StringLiteral_1,true,1,2,
                 (System_String_o *)0x0,(System_String_o *)0x0,1,1,false,(MethodInfo *)0x0);
                    /* try { // try from 0360db7c to 0370db83 has its CatchHandler @ 0360dd34 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

