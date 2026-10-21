// FIBPEPMPJDI$$.ctor @ RVA 0x331FE78

void FIBPEPMPJDI___ctor(FIBPEPMPJDI_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ILGLOCBJFEG__o *__this_00;
  System_Collections_Generic_List_ILGLOCBJFEG__o **ppSVar1;
  MethodInfo *extraout_x1;
  
                    /* catch() { ... } // from try @ 0341fe68 with catch @ 0341fe80 */
                    /* catch() { ... } // from try @ 0341fd60 with catch @ 0341fe84 */
                    /* catch() { ... } // from try @ 0341fe64 with catch @ 0341fe88 */
                    /* catch() { ... } // from try @ 0341fdbc with catch @ 0341fe8c */
                    /* catch() { ... } // from try @ 0341fd44 with catch @ 0341fe90 */
                    /* try { // try from 0341fea0 to 0351fea3 has its CatchHandler @ 0341fed0 */
  if ((DAT_04567840 & 1) == 0) {
                    /* try { // try from 0341fea4 to 0351fed7 has its CatchHandler @ 0341fc90 */
    FUN_01bab630(&Method_System_Collections_Generic_List<ILGLOCBJFEG>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ILGLOCBJFEG>_TypeInfo);
    DAT_04567840 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_ILGLOCBJFEG__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ILGLOCBJFEG>_TypeInfo,method);
                    /* catch() { ... } // from try @ 0341fea0 with catch @ 0341fed0 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ILGLOCBJFEG>__ctor__);
  ppSVar1 = &(__this->fields).KPFGHBEKJIM;
                    /* try { // try from 0341fed8 to 0351fedf has its CatchHandler @ 0341fef4 */
  *ppSVar1 = __this_00;
                    /* try { // try from 0341fee0 to 0351feeb has its CatchHandler @ 0341fc90 */
  thunk_FUN_01c20e04(ppSVar1,__this_00);
                    /* try { // try from 0341feec to 0351fef3 has its CatchHandler @ 0341fef4 */
  ILGLOCBJFEG___ctor((ILGLOCBJFEG_o *)__this,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 0341fe48 with catch @ 0341fef4
                       catch() { ... } // from try @ 0341fed8 with catch @ 0341fef4
                       catch() { ... } // from try @ 0341feec with catch @ 0341fef4 */
                    /* try { // try from 0341fef8 to 0352008f has its CatchHandler @ 0341fef8
                       catch() { ... } // from try @ 0341fef8 with catch @ 0341fef8
                       catch() { ... } // from try @ 03420140 with catch @ 0341fef8
                       catch() { ... } // from try @ 0342019c with catch @ 0341fef8
                       catch() { ... } // from try @ 034201d4 with catch @ 0341fef8
                       catch() { ... } // from try @ 0342021c with catch @ 0341fef8 */
  ILGLOCBJFEG__GNLPNKGBAFL((ILGLOCBJFEG_o *)__this,0xe,(MethodInfo *)0x0);
  return;
}

