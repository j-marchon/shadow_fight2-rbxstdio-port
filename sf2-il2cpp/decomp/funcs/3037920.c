// JOAIBHHONIM$$.ctor @ RVA 0x3037920

void JOAIBHHONIM___ctor(JOAIBHHONIM_o *__this,
                       System_Collections_Generic_List_BCGLDKLKKDA__o *GGBBGNMJIEI,
                       MethodInfo *method)

{
  System_Collections_Generic_List_BCGLDKLKKDA__o *__this_00;
  JOAIBHHONIM_Fields *pJVar1;
  
                    /* catch() { ... } // from try @ 03137950 with catch @ 03137948
                       catch() { ... } // from try @ 0313798c with catch @ 03137948
                       catch() { ... } // from try @ 031379c4 with catch @ 03137948 */
                    /* try { // try from 0313794c to 0323794f has its CatchHandler @ 0313795c */
  if ((DAT_04565d5c & 1) == 0) {
                    /* try { // try from 03137950 to 03237973 has its CatchHandler @ 03137948 */
    FUN_01bab630(&Method_System_Collections_Generic_List<BCGLDKLKKDA>__ctor__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0313794c with catch @ 0313795c
                        */
    FUN_01bab630(&System_Collections_Generic_List<BCGLDKLKKDA>_TypeInfo);
    DAT_04565d5c = 1;
  }
                    /* try { // try from 03137974 to 0323798b has its CatchHandler @ 031379bc */
  __this_00 = (System_Collections_Generic_List_BCGLDKLKKDA__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<BCGLDKLKKDA>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<BCGLDKLKKDA>__ctor__);
  pJVar1 = &__this->fields;
  pJVar1->IEKBILOHNDF = __this_00;
                    /* try { // try from 0313798c to 032379ab has its CatchHandler @ 03137948 */
  thunk_FUN_01c20e04(pJVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  pJVar1->IEKBILOHNDF = GGBBGNMJIEI;
                    /* try { // try from 031379ac to 032379bb has its CatchHandler @ 031379bc */
                    /* catch() { ... } // from try @ 03137974 with catch @ 031379bc
                       catch() { ... } // from try @ 031379ac with catch @ 031379bc */
  thunk_FUN_01c20e04(pJVar1,GGBBGNMJIEI);
  return;
}

