// CLFCKIFNGHA$$FLGLJENNFLG @ RVA 0x3456038

bool CLFCKIFNGHA__FLGLJENNFLG(System_String_o *EIJDDKJONFO,MethodInfo *method)

{
  bool bVar1;
  System_String_o *key;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  
                    /* try { // try from 03556040 to 03656047 has its CatchHandler @ 035580f0 */
                    /* try { // try from 03556048 to 03656073 has its CatchHandler @ 03558188 */
  if ((DAT_045682cc & 1) == 0) {
    FUN_01bab630(&CLFCKIFNGHA_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_IAGNPGHOAIC>_ContainsKey__);
                    /* try { // try from 03556074 to 0365608f has its CatchHandler @ 035581c4 */
    DAT_045682cc = 1;
  }
  key = CMEBCBKGFFL__NFBODKMCAMM(EIJDDKJONFO,(MethodInfo *)0x0);
  if ((CLFCKIFNGHA_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03556094 to 0365609b has its CatchHandler @ 035580ec */
    thunk_FUN_01ba7564(CLFCKIFNGHA_TypeInfo);
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           CLFCKIFNGHA_TypeInfo->static_fields->FJONCCJJCBP;
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* try { // try from 035560ac to 036560b3 has its CatchHandler @ 035580e8 */
                    /* try { // try from 035560b8 to 036560bf has its CatchHandler @ 035580e4 */
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (__this,(Il2CppObject *)key,
                       Method_System_Collections_Generic_Dictionary<string,_IAGNPGHOAIC>_ContainsKey__
                      );
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

