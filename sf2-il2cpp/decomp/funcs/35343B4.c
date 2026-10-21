// JJPNLEPEAFM$$FOMGGGJEKEA @ RVA 0x35343B4

Nekki_SF2_GUI_Dialogs_BaseDialog_o *
JJPNLEPEAFM__FOMGGGJEKEA
          (JMDPBFOCHHP_ENBCJNLAHAC_o *LMMIEAICFHL,JMDPBFOCHHP_ENBCJNLAHAC_o *EAFJFDILLHK,
          System_Action_object__o *IELDNEAAPBE,System_String_o *IJBAFPCLAGN,
          System_String_o *NBEADFFAJCJ,bool KBIPPAEJHLH,int32_t GOGLDMHCGHD,int32_t LDMAENFPGHA,
          System_String_o *GJOBHDLPEHH,System_String_o *IDLCEMOBHIB,int32_t HDBFCOGLJII,
          int32_t IHHLPNCOEOB,bool OCBFFECAJFG,MethodInfo *method)

{
  bool bVar1;
  JMDPBFOCHHP_o *pJVar2;
  FKLIOKJBFCI_o *__this;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar3;
  System_String_o *message;
  
                    /* try { // try from 036343d8 to 0373440f has its CatchHandler @ 03634510 */
  if ((DAT_04568a7c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
                    /* try { // try from 03634418 to 0373442f has its CatchHandler @ 03634508 */
    FUN_01bab630(&FKLIOKJBFCI_TypeInfo);
    FUN_01bab630(&HJPEKDOPBHN_TypeInfo);
                    /* try { // try from 03634430 to 0373443f has its CatchHandler @ 036344fc */
    FUN_01bab630(&StringLiteral_15428);
    FUN_01bab630(&StringLiteral_840);
                    /* try { // try from 03634448 to 0373444f has its CatchHandler @ 036344f8 */
    DAT_04568a7c = 1;
  }
  if (LMMIEAICFHL == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036343d8 with catch @ 03634510
                        */
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(IJBAFPCLAGN,(MethodInfo *)0x0);
    if (bVar1) {
                    /* try { // try from 03634528 to 0373452b has its CatchHandler @ 03634538 */
                    /* catch() { ... } // from try @ 03634528 with catch @ 03634538 */
      return (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
    }
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(IJBAFPCLAGN,(MethodInfo *)0x0);
    LMMIEAICFHL = (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0;
    if (!bVar1) {
      if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      pJVar2 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
                    /* try { // try from 03634578 to 0373459f has its CatchHandler @ 036345b4 */
      if (pJVar2 == (JMDPBFOCHHP_o *)0x0) goto LAB_036345e8;
      LMMIEAICFHL = JMDPBFOCHHP__DIFLKMKBENA(pJVar2,IJBAFPCLAGN,false,(MethodInfo *)0x0);
      if (LMMIEAICFHL == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) {
                    /* try { // try from 036345a0 to 037345ab has its CatchHandler @ 03634164 */
                    /* try { // try from 036345ac to 037345b3 has its CatchHandler @ 036345b4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03634578 with catch @ 036345b4
                       catch(type#2 @ 00000000) { ... } // from try @ 036345ac with catch @ 036345b4
                        */
        message = System_String__Concat
                            (StringLiteral_15428,IJBAFPCLAGN,StringLiteral_840,(MethodInfo *)0x0);
        if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
        }
        UnityEngine_Debug__LogError((Il2CppObject *)message,(MethodInfo *)0x0);
        return (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
      }
    }
  }
                    /* try { // try from 03634450 to 037344db has its CatchHandler @ 03634164 */
  if ((EAFJFDILLHK == (JMDPBFOCHHP_ENBCJNLAHAC_o *)0x0) &&
     (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(NBEADFFAJCJ,(MethodInfo *)0x0), !bVar1)) {
    if ((HJPEKDOPBHN_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pJVar2 = HJPEKDOPBHN__GAFKBFMBPKO((MethodInfo *)0x0);
    if (pJVar2 == (JMDPBFOCHHP_o *)0x0) {
LAB_036345e8:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
    EAFJFDILLHK = JMDPBFOCHHP__DIFLKMKBENA(pJVar2,NBEADFFAJCJ,false,(MethodInfo *)0x0);
  }
  __this = (FKLIOKJBFCI_o *)thunk_FUN_01bda818(FKLIOKJBFCI_TypeInfo);
                    /* try { // try from 036344dc to 037344df has its CatchHandler @ 036344f4 */
                    /* try { // try from 036344e0 to 037344e3 has its CatchHandler @ 03634164 */
  FKLIOKJBFCI___ctor(__this,LMMIEAICFHL,EAFJFDILLHK,IELDNEAAPBE,KBIPPAEJHLH,GOGLDMHCGHD,LDMAENFPGHA,
                     GJOBHDLPEHH,IDLCEMOBHIB,HDBFCOGLJII,IHHLPNCOEOB,OCBFFECAJFG,(MethodInfo *)0x0);
                    /* try { // try from 036344e4 to 037344e7 has its CatchHandler @ 036344f0 */
                    /* try { // try from 036344e8 to 03734527 has its CatchHandler @ 03634164 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036344e4 with catch @ 036344f0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036344dc with catch @ 036344f4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03634448 with catch @ 036344f8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03634430 with catch @ 036344fc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036343a0 with catch @ 03634500
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0363434c with catch @ 03634504
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03634418 with catch @ 03634508
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03634384 with catch @ 0363450c
                        */
  pNVar3 = GCIFMNHADDF__ACDDKABEBAP(0xa0,(Il2CppObject *)__this,(MethodInfo *)0x0);
  return pNVar3;
}

