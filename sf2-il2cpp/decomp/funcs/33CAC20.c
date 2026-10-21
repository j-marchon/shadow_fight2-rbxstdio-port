// FCPAHDIGJGN$$CLKGKNCGJID @ RVA 0x33CAC20

void FCPAHDIGJGN__CLKGKNCGJID
               (FCPAHDIGJGN_o *__this,System_String_o *KKJPPDNKGAI,int32_t HFELHFCLPJE,
               int32_t PKEAOHMFMFD,bool HLJOHNIDBDM,MethodInfo *method)

{
  System_String_array *values;
  System_String_o *pSVar1;
  int32_t local_28;
  int32_t iStack_24;
  
                    /* try { // try from 034cac24 to 035cac27 has its CatchHandler @ 034cac48 */
                    /* try { // try from 034cac28 to 035cac4f has its CatchHandler @ 034caad8 */
                    /* catch() { ... } // from try @ 034cac24 with catch @ 034cac48 */
  local_28 = PKEAOHMFMFD;
  iStack_24 = HFELHFCLPJE;
  if ((DAT_04567e1d & 1) == 0) {
                    /* try { // try from 034cac50 to 035cac57 has its CatchHandler @ 034cac6c */
    FUN_01bab630(&string___TypeInfo);
                    /* try { // try from 034cac58 to 035cac63 has its CatchHandler @ 034caad8 */
    FUN_01bab630(&StringLiteral_232);
                    /* try { // try from 034cac64 to 035cac6b has its CatchHandler @ 034cac6c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 034cac50 with catch @ 034cac6c
                       catch(type#2 @ 00000000) { ... } // from try @ 034cac64 with catch @ 034cac6c
                        */
    FUN_01bab630(&StringLiteral_233);
    FUN_01bab630(&StringLiteral_2719);
    DAT_04567e1d = 1;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,6);
  if (values != (System_String_array *)0x0) {
    if ((int)values->max_length != 0) {
      values->m_Items[0] = StringLiteral_2719;
      thunk_FUN_01c20e04(values->m_Items);
      if (1 < (uint)values->max_length) {
        values->m_Items[1] = KKJPPDNKGAI;
        thunk_FUN_01c20e04(values->m_Items + 1,KKJPPDNKGAI);
        if (2 < (uint)values->max_length) {
          values->m_Items[2] = StringLiteral_232;
          thunk_FUN_01c20e04(values->m_Items + 2);
          pSVar1 = System_Int32__ToString((int32_t)&iStack_24,(MethodInfo *)0x0);
          if (3 < (uint)values->max_length) {
                    /* try { // try from 034cad1c to 035cadd3 has its CatchHandler @ 034cad1c
                       catch() { ... } // from try @ 034cad1c with catch @ 034cad1c
                       catch() { ... } // from try @ 034cadfc with catch @ 034cad1c
                       catch() { ... } // from try @ 034cae64 with catch @ 034cad1c
                       catch() { ... } // from try @ 034caeac with catch @ 034cad1c */
            values->m_Items[3] = pSVar1;
            thunk_FUN_01c20e04(values->m_Items + 3,pSVar1);
            if (4 < (uint)values->max_length) {
              values->m_Items[4] = StringLiteral_233;
              thunk_FUN_01c20e04(values->m_Items + 4);
              pSVar1 = System_Int32__ToString((int32_t)&local_28,(MethodInfo *)0x0);
              if (5 < (uint)values->max_length) {
                values->m_Items[5] = pSVar1;
                thunk_FUN_01c20e04();
                pSVar1 = System_String__Concat(values,(MethodInfo *)0x0);
                NHJCFGACFDF__DHAAGKPHJLA((NHJCFGACFDF_o *)__this,pSVar1,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

