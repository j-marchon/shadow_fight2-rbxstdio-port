// GGLDGAAPKCF$$JNGBIOPBPOH @ RVA 0x35D3288

void GGLDGAAPKCF__JNGBIOPBPOH
               (System_String_o *PCPECHHMLEC,System_String_o *EHNFGMGKCHO,
               System_String_o *JDECODCCMHP,bool EOECLHJKEJL,IGNEHHMICKB_o *EFGJLFEICDO,
               MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  System_Collections_Generic_List_object__o *__this;
  NBLEEDEAPHB_o *__this_00;
  System_String_o **ppSVar4;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar5;
  System_Object_array *pSVar6;
  ADDCOJMHMHE_o AStack_180;
  undefined1 auStack_f0 [8];
  System_String_o *local_e8;
  System_Collections_Generic_List_object__o *local_e0;
  IGNEHHMICKB_o *local_d8 [4];
  System_String_o *local_b8 [11];
  
  if ((DAT_04568ff7 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
                    /* try { // try from 036d32ec to 037d3313 has its CatchHandler @ 036d34f4 */
    FUN_01bab630(&NBLEEDEAPHB_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568ff7 = 1;
  }
  memset(auStack_f0,0,0x90);
  if (EFGJLFEICDO == (IGNEHHMICKB_o *)0x0) {
                    /* try { // try from 036d342c to 037d34bb has its CatchHandler @ 036d303c */
    pNVar5 = JJPNLEPEAFM__JNDPLPKDPCP
                       (PCPECHHMLEC,EHNFGMGKCHO,JDECODCCMHP,StringLiteral_1,
                        (System_Action_object__o *)0x0,1,0,false,false,StringLiteral_1,true,true,
                        true,true,(MethodInfo *)0x0);
    if (EOECLHJKEJL) {
      if (pNVar5 == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) goto LAB_036d3548;
      bVar1 = (Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo->_2).naturalAligment;
      if ((bVar1 <= (pNVar5->klass->_2).naturalAligment) &&
         ((pNVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)Nekki_SF2_GUI_Dialogs_SimpleDialog_TypeInfo)) {
        *(float *)&pNVar5[1].fields._bottomStripe =
             *(float *)&pNVar5[1].fields._bottomStripe + 350.0;
      }
      goto LAB_036d3520;
    }
  }
  else {
                    /* try { // try from 036d3348 to 037d3373 has its CatchHandler @ 036d34f0 */
    memset(auStack_f0,0,0x90);
    local_e8 = PCPECHHMLEC;
    thunk_FUN_01c20e04(&local_e8,PCPECHHMLEC);
    __this = (System_Collections_Generic_List_object__o *)
             thunk_FUN_01bda818(System_Collections_Generic_List<NBLEEDEAPHB>_TypeInfo);
    System_Collections_Generic_List<object>___ctor
              (__this,Method_System_Collections_Generic_List<NBLEEDEAPHB>__ctor__);
    __this_00 = (NBLEEDEAPHB_o *)thunk_FUN_01bda818(NBLEEDEAPHB_TypeInfo);
                    /* try { // try from 036d33a4 to 037d33ab has its CatchHandler @ 036d34e4 */
    NBLEEDEAPHB___ctor(__this_00,StringLiteral_1,StringLiteral_1,StringLiteral_1,StringLiteral_1,0,
                       -1,(IGFGDDANEPE_o *)0x0,(LBMOOFGGPEB_o *)0x0,0,(AMJMGFCCAKN_o *)0x0,
                       (MethodInfo *)0x0);
    if (__this_00 == (NBLEEDEAPHB_o *)0x0) goto LAB_036d3548;
    ppSVar4 = &(__this_00->fields).ABCHAOKFLGL;
                    /* try { // try from 036d33bc to 037d33c7 has its CatchHandler @ 036d34dc */
    *ppSVar4 = EHNFGMGKCHO;
    thunk_FUN_01c20e04(ppSVar4,EHNFGMGKCHO);
    lVar3 = Method_System_Collections_Generic_List<NBLEEDEAPHB>_Add__;
    if (__this == (System_Collections_Generic_List_object__o *)0x0) goto LAB_036d3548;
    pSVar6 = (__this->fields)._items;
    (__this->fields)._version = (__this->fields)._version + 1;
    if (pSVar6 == (System_Object_array *)0x0) goto LAB_036d3548;
    uVar2 = (__this->fields)._size;
    if (uVar2 < (uint)pSVar6->max_length) {
                    /* try { // try from 036d3408 to 037d342b has its CatchHandler @ 036d34e0 */
      (__this->fields)._size = uVar2 + 1;
      pSVar6->m_Items[(int)uVar2] = (Il2CppObject *)__this_00;
      thunk_FUN_01c20e04(pSVar6->m_Items + (int)uVar2,__this_00);
    }
    else {
                    /* try { // try from 036d34bc to 037d34bf has its CatchHandler @ 036d34ec */
                    /* try { // try from 036d34c0 to 037d34c7 has its CatchHandler @ 036d34e8 */
                    /* try { // try from 036d34c8 to 037d34cb has its CatchHandler @ 036d303c */
      System_Collections_Generic_List<object>__AddWithResize
                (__this,(Il2CppObject *)__this_00,
                 *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
    }
                    /* try { // try from 036d34cc to 037d34cf has its CatchHandler @ 036d34d8 */
                    /* try { // try from 036d34d0 to 037d350b has its CatchHandler @ 036d303c */
    local_e0 = __this;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d34cc with catch @ 036d34d8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d33bc with catch @ 036d34dc
                        */
    thunk_FUN_01c20e04(&local_e0,__this);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d3408 with catch @ 036d34e0
                        */
    local_d8[0] = EFGJLFEICDO;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d33a4 with catch @ 036d34e4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d34c0 with catch @ 036d34e8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d34bc with catch @ 036d34ec
                        */
    thunk_FUN_01c20e04(local_d8,EFGJLFEICDO);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d3348 with catch @ 036d34f0
                        */
    local_b8[0] = JDECODCCMHP;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 036d32ec with catch @ 036d34f4
                        */
    thunk_FUN_01c20e04(local_b8,JDECODCCMHP);
                    /* try { // try from 036d350c to 037d350f has its CatchHandler @ 036d351c */
    memcpy(&AStack_180,auStack_f0,0x90);
    pNVar5 = JJPNLEPEAFM__NMHCCGPELBE(&AStack_180,(MethodInfo *)0x0);
  }
                    /* catch() { ... } // from try @ 036d350c with catch @ 036d351c */
  if (pNVar5 == (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0) {
LAB_036d3548:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_036d3520:
                    /* try { // try from 036d3524 to 037d358b has its CatchHandler @ 036d35a0 */
  (pNVar5->fields).IsQuestDialog = true;
  return;
}

