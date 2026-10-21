// FKAKHBPABPA$$.ctor @ RVA 0x34CF46C

void FKAKHBPABPA___ctor(FKAKHBPABPA_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_KIMBEBLJJPN__o *__this_00;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 035cf480 to 036cf487 has its CatchHandler @ 035cf64c */
  if ((DAT_045686a5 & 1) == 0) {
                    /* try { // try from 035cf498 to 036cf49f has its CatchHandler @ 035cf630 */
    FUN_01bab630(&Method_System_Collections_Generic_List<KIMBEBLJJPN>__ctor__);
                    /* try { // try from 035cf4a4 to 036cf4ab has its CatchHandler @ 035cf61c */
    FUN_01bab630(&System_Collections_Generic_List<KIMBEBLJJPN>_TypeInfo);
                    /* try { // try from 035cf4b4 to 036cf4bb has its CatchHandler @ 035cf644 */
    DAT_045686a5 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 035cf4bc to 036cf4e7 has its CatchHandler @ 035cf688 */
  __this_00 = (System_Collections_Generic_List_KIMBEBLJJPN__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<KIMBEBLJJPN>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<KIMBEBLJJPN>__ctor__);
  (__this->fields).OKAINPMIKKD = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

