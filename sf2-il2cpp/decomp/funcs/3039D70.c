// LJNJDFEAIOH$$OOIHMJGLOHF @ RVA 0x3039D70

void LJNJDFEAIOH__OOIHMJGLOHF
               (LJNJDFEAIOH_o *__this,Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *DCPPLPKKOGF,
               System_Collections_Generic_List_GKLPDMLELJF__o *KIFIMBGOPFG,int32_t DPJIDNBJIBG,
               System_DateTime_o PJHOLDOLLCN,int32_t LINBBAKAFCP,MethodInfo *method)

{
  IFFFKKMMKFO_o *__this_00;
  System_String_array *values;
  System_String_o *pSVar1;
  GKLPDMLELJF_o *pGVar2;
  GKLPDMLELJF_o *__this_01;
  int32_t local_54;
  int64_t local_50;
  int32_t local_48;
  int32_t iStack_44;
  System_DateTime_Fields SStack_38;
  
  local_48 = LINBBAKAFCP;
  iStack_44 = DPJIDNBJIBG;
  SStack_38 = PJHOLDOLLCN.fields._dateData;
  if ((DAT_04565d6d & 1) == 0) {
    FUN_01bab630(&System_DateTime_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GKLPDMLELJF>_get_Item__);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_167);
    FUN_01bab630(&StringLiteral_18333);
    FUN_01bab630(&StringLiteral_1100);
    FUN_01bab630(&StringLiteral_391);
    FUN_01bab630(&StringLiteral_220);
    __this = (LJNJDFEAIOH_o *)FUN_01bab630(&StringLiteral_1377);
    DAT_04565d6d = 1;
  }
  local_50 = 0;
  local_54 = 0;
  if (((KIFIMBGOPFG != (System_Collections_Generic_List_GKLPDMLELJF__o *)0x0) &&
      (__this = (LJNJDFEAIOH_o *)
                System_Collections_Generic_List<object>__get_Item
                          ((System_Collections_Generic_List_object__o *)KIFIMBGOPFG,DPJIDNBJIBG,
                           Method_System_Collections_Generic_List<GKLPDMLELJF>_get_Item__),
      DCPPLPKKOGF != (Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll_o *)0x0)) &&
     (__this_00 = Nekki_SF2_GUI_Dialogs_Raids_RaidPlayersRoll__GetPlayerCellInfoForTest
                            (DCPPLPKKOGF,(GKLPDMLELJF_o *)__this,(MethodInfo *)0x0),
     __this = (LJNJDFEAIOH_o *)0x0, __this_00 != (IFFFKKMMKFO_o *)0x0)) {
    IFFFKKMMKFO__OEHLOKAPCJP(__this_00,PJHOLDOLLCN,(MethodInfo *)0x0);
    (__this_00->fields).JOAHABGBLEF = (float)LINBBAKAFCP;
    __this_01 = (__this_00->fields)._IPNPNPOLCFO_k__BackingField;
    values = (System_String_array *)FUN_01bab718(string___TypeInfo,0xb);
    __this = (LJNJDFEAIOH_o *)0x0;
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        values->m_Items[0] = StringLiteral_18333;
        thunk_FUN_01c20e04(values->m_Items);
        pSVar1 = System_Int32__ToString((int32_t)&iStack_44,(MethodInfo *)0x0);
        if (1 < (uint)values->max_length) {
          values->m_Items[1] = pSVar1;
          thunk_FUN_01c20e04(values->m_Items + 1,pSVar1);
          if (2 < (uint)values->max_length) {
            values->m_Items[2] = StringLiteral_167;
            __this = (LJNJDFEAIOH_o *)thunk_FUN_01c20e04();
            pGVar2 = (__this_00->fields)._IPNPNPOLCFO_k__BackingField;
            if (pGVar2 == (GKLPDMLELJF_o *)0x0) goto LAB_0313a0d0;
            local_50 = (pGVar2->fields).ANAJGHJEEOC;
            pSVar1 = System_Int64__ToString((int64_t)&local_50,(MethodInfo *)0x0);
            if (3 < (uint)values->max_length) {
              values->m_Items[3] = pSVar1;
              thunk_FUN_01c20e04(values->m_Items + 3,pSVar1);
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = StringLiteral_391;
                thunk_FUN_01c20e04(values->m_Items + 4);
                pSVar1 = System_Int32__ToString((int32_t)&local_48,(MethodInfo *)0x0);
                if (5 < (uint)values->max_length) {
                  values->m_Items[5] = pSVar1;
                  thunk_FUN_01c20e04(values->m_Items + 5,pSVar1);
                  if (6 < (uint)values->max_length) {
                    values->m_Items[6] = StringLiteral_220;
                    thunk_FUN_01c20e04();
                    if ((System_DateTime_TypeInfo->_2).cctor_finished == 0) {
                      thunk_FUN_01ba7564();
                    }
                    local_54 = System_DateTime__get_Second
                                         ((System_DateTime_o)&SStack_38,(MethodInfo *)0x0);
                    pSVar1 = System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
                    if (7 < (uint)values->max_length) {
                      values->m_Items[7] = pSVar1;
                      thunk_FUN_01c20e04(values->m_Items + 7,pSVar1);
                      if (8 < (uint)values->max_length) {
                        values->m_Items[8] = StringLiteral_1377;
                        thunk_FUN_01c20e04(values->m_Items + 8);
                        local_54 = System_DateTime__get_Millisecond
                                             ((System_DateTime_o)&SStack_38,(MethodInfo *)0x0);
                        pSVar1 = System_Int32__ToString((int32_t)&local_54,(MethodInfo *)0x0);
                        if (9 < (uint)values->max_length) {
                          values->m_Items[9] = pSVar1;
                          thunk_FUN_01c20e04(values->m_Items + 9,pSVar1);
                          if (10 < (uint)values->max_length) {
                            values->m_Items[10] = StringLiteral_1100;
                            thunk_FUN_01c20e04();
                    /* try { // try from 0313a09c to 0323a0cb has its CatchHandler @ 0313a09c
                       catch() { ... } // from try @ 0313a09c with catch @ 0313a09c
                       catch() { ... } // from try @ 0313a168 with catch @ 0313a09c
                       catch() { ... } // from try @ 0313a19c with catch @ 0313a09c
                       catch() { ... } // from try @ 0313a1f8 with catch @ 0313a09c */
                            __this = (LJNJDFEAIOH_o *)
                                     System_String__Concat(values,(MethodInfo *)0x0);
                            if (__this_01 != (GKLPDMLELJF_o *)0x0) {
                              GKLPDMLELJF__OFDBFMLANAH
                                        (__this_01,(System_String_o *)__this,(MethodInfo *)0x0);
                              return;
                            }
                            goto LAB_0313a0d0;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0313a0cc to 0323a0d7 has its CatchHandler @ 0313a168 */
      FUN_01bab8d0();
    }
  }
LAB_0313a0d0:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

