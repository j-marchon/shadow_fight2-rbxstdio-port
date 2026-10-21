// IGJEEGBBNFC$$.ctor @ RVA 0x32A196C

void IGJEEGBBNFC___ctor(IGJEEGBBNFC_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *pSVar1;
  System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o **ppSVar2;
  System_Collections_Generic_List_string__o *pSVar3;
  System_Collections_Generic_List_string__o **ppSVar4;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 033a1974 to 034a197f has its CatchHandler @ 033a19c0 */
                    /* try { // try from 033a1990 to 034a1997 has its CatchHandler @ 033a1af4 */
  if ((DAT_045673c4 & 1) == 0) {
                    /* try { // try from 033a19b0 to 034a19b3 has its CatchHandler @ 033a19c8 */
    FUN_01bab630(&Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>__ctor__);
                    /* try { // try from 033a19b8 to 034a19bb has its CatchHandler @ 033a19c4 */
                    /* try { // try from 033a19bc to 034a19e3 has its CatchHandler @ 033a1758 */
                    /* catch() { ... } // from try @ 033a1974 with catch @ 033a19c0 */
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
                    /* catch() { ... } // from try @ 033a19b8 with catch @ 033a19c4 */
                    /* catch() { ... } // from try @ 033a19b0 with catch @ 033a19c8 */
                    /* catch() { ... } // from try @ 033a1954 with catch @ 033a19cc */
    FUN_01bab630(&System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_045673c4 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 033a19e4 to 034a19e7 has its CatchHandler @ 033a1ae0 */
  pSVar1 = (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_TypeInfo,
                              method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>__ctor__);
  ppSVar2 = &(__this->fields).FNEKKIBOEKE;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_MMDDDDFHOLG_DOCBHLNBECF__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>_TypeInfo);
                    /* try { // try from 033a1a18 to 034a1a1f has its CatchHandler @ 033a1bcc */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<MMDDDDFHOLG_DOCBHLNBECF>__ctor__);
  ppSVar2 = &(__this->fields).AKMNHHKLCKL;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar3 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar4 = &(__this->fields).HFICCAMAMGI;
  *ppSVar4 = pSVar3;
  thunk_FUN_01c20e04(ppSVar4,pSVar3);
  pSVar3 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar4 = &(__this->fields).PGJECFOEEEL;
  *ppSVar4 = pSVar3;
  thunk_FUN_01c20e04(ppSVar4,pSVar3);
                    /* try { // try from 033a1a84 to 034a1aa7 has its CatchHandler @ 033a1bb8 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

