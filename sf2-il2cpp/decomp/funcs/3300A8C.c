// Nekki.SF2.GUI.Dialogs.Raids.Clans.CreateClanDialog$$LLKLEHBDELH @ RVA 0x3300A8C

bool Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog__LLKLEHBDELH
               (Nekki_SF2_GUI_Dialogs_Raids_Clans_CreateClanDialog_o *__this,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  BKKENCMPLLF_o *pBVar3;
  System_Collections_Generic_Dictionary_BBJBEEEJPDC__CPAPMBPHEAB__o *__this_00;
  int iVar4;
  Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *pNVar5;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  Il2CppObject *pIStack_28;
  
                    /* try { // try from 03400a9c to 03500abf has its CatchHandler @ 03400c34 */
  if ((DAT_0456771b & 1) == 0) {
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_CPAPMBPHEAB>_GetEnumerator__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<BBJBEEEJPDC,_CPAPMBPHEAB>_Dispose__
                );
                    /* try { // try from 03400ac4 to 03500ac7 has its CatchHandler @ 03400acc */
                    /* try { // try from 03400ac8 to 03500ae7 has its CatchHandler @ 03400728 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<BBJBEEEJPDC,_CPAPMBPHEAB>_MoveNext__
                );
                    /* catch() { ... } // from try @ 03400ac4 with catch @ 03400acc */
                    /* catch() { ... } // from try @ 03400a1c with catch @ 03400ad0 */
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary_Enumerator<BBJBEEEJPDC,_CPAPMBPHEAB>_get_Current__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_KeyValuePair<BBJBEEEJPDC,_CPAPMBPHEAB>_get_Value__
                );
                    /* try { // try from 03400ae8 to 03500aeb has its CatchHandler @ 03400bf8 */
    DAT_0456771b = 1;
  }
  uStack_38._0_4_ = 0;
  uStack_38._4_4_ = 0;
  local_40 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIStack_28 = (Il2CppObject *)0x0;
  uStack_30 = (Il2CppObject *)0x0;
  pBVar3 = (__this->fields).FLLHHEODKPH;
  if (pBVar3 != (BKKENCMPLLF_o *)0x0) {
    pNVar5 = (__this->fields).BBKLDPELJHI;
                    /* try { // try from 03400b04 to 03500b6b has its CatchHandler @ 03400c28 */
    iVar2 = BKKENCMPLLF__ODCJNJBFOLB(pBVar3,(MethodInfo *)0x0);
    if (pNVar5 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *)0x0) {
      Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetEBoxError
                (pNVar5,1,iVar2,(MethodInfo *)0x0);
      pBVar3 = (__this->fields).FLLHHEODKPH;
      if (pBVar3 != (BKKENCMPLLF_o *)0x0) {
        pNVar5 = (__this->fields).BBKLDPELJHI;
        iVar2 = BKKENCMPLLF__AFAFFPBDCHJ(pBVar3,(MethodInfo *)0x0);
        if (pNVar5 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *)0x0) {
          Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetEBoxError
                    (pNVar5,2,iVar2,(MethodInfo *)0x0);
          pBVar3 = (__this->fields).FLLHHEODKPH;
          if (pBVar3 != (BKKENCMPLLF_o *)0x0) {
            pNVar5 = (__this->fields).BBKLDPELJHI;
            iVar2 = BKKENCMPLLF__HOFBHBCLOEO(pBVar3,(MethodInfo *)0x0);
            if (pNVar5 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *)0x0) {
              Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget__SetEBoxError
                        (pNVar5,3,iVar2,(MethodInfo *)0x0);
              pNVar5 = (__this->fields).BBKLDPELJHI;
              if ((pNVar5 != (Nekki_SF2_GUI_Dialogs_Raids_Clans_ClanProfileWidget_o *)0x0) &&
                 (__this_00 = (pNVar5->fields).LCJAAPPDFJJ,
                 __this_00 !=
                 (System_Collections_Generic_Dictionary_BBJBEEEJPDC__CPAPMBPHEAB__o *)0x0)) {
                    /* try { // try from 03400b9c to 03500bbb has its CatchHandler @ 03400dac */
                System_Collections_Generic_Dictionary<Int32Enum,_Int32Enum>__GetEnumerator
                          ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)
                           &local_40,
                           (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                           Method_System_Collections_Generic_Dictionary<BBJBEEEJPDC,_CPAPMBPHEAB>_GetEnumerator__
                          );
                do {
                  bVar1 = System_Collections_Generic_Dictionary_Enumerator<Int32Enum,_Int32Enum>__MoveNext
                                    ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o
                                      *)&local_40,
                                     Method_System_Collections_Generic_Dictionary_Enumerator<BBJBEEEJPDC,_CPAPMBPHEAB>_MoveNext__
                                    );
                  if (!bVar1) {
                    /* try { // try from 03400bcc to 03500bcf has its CatchHandler @ 03400c44 */
                    iVar4 = 5;
                    goto LAB_03400bd0;
                  }
                    /* try { // try from 03400bbc to 03500bc3 has its CatchHandler @ 03400c50 */
                } while (uStack_30._4_4_ == 0);
                    /* try { // try from 03400bc4 to 03500bcb has its CatchHandler @ 03400c4c */
                iVar4 = 4;
LAB_03400bd0:
                    /* try { // try from 03400bd0 to 03500bd3 has its CatchHandler @ 03400c40 */
                    /* try { // try from 03400bd4 to 03500bdb has its CatchHandler @ 03400c5c */
                System_Collections_Generic_Dictionary_Enumerator<Int32Enum,_Int32Enum>__Dispose
                          ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)
                           &local_40,
                           Method_System_Collections_Generic_Dictionary_Enumerator<BBJBEEEJPDC,_CPAPMBPHEAB>_Dispose__
                          );
                    /* try { // try from 03400bdc to 03500bdf has its CatchHandler @ 03400c10 */
                    /* try { // try from 03400be0 to 03500be3 has its CatchHandler @ 03400c20 */
                    /* try { // try from 03400be4 to 03500be7 has its CatchHandler @ 03400c1c */
                    /* try { // try from 03400be8 to 03500beb has its CatchHandler @ 03400c18 */
                    /* try { // try from 03400bec to 03500bef has its CatchHandler @ 03400c08 */
                    /* try { // try from 03400bf0 to 03500bf7 has its CatchHandler @ 03400c28 */
                return iVar4 != 4;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

