// OCABNNJIENC$$.ctor @ RVA 0x339B7A8

void OCABNNJIENC___ctor(OCABNNJIENC_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_OCABNNJIENC_KMODKLKCHNL__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_04567c7c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<OCABNNJIENC_KMODKLKCHNL>__ctor__);
                    /* try { // try from 0349b7e4 to 0359b7ef has its CatchHandler @ 0349b828 */
    FUN_01bab630(&System_Collections_Generic_List<OCABNNJIENC_KMODKLKCHNL>_TypeInfo);
                    /* try { // try from 0349b7f0 to 0359b81b has its CatchHandler @ 0349b62c */
    DAT_04567c7c = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_OCABNNJIENC_KMODKLKCHNL__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<OCABNNJIENC_KMODKLKCHNL>_TypeInfo,
                                 method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<OCABNNJIENC_KMODKLKCHNL>__ctor__);
  (__this->fields).EMJCDJMBIGI = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
                    /* try { // try from 0349b81c to 0359b823 has its CatchHandler @ 0349b834 */
                    /* try { // try from 0349b824 to 0359b843 has its CatchHandler @ 0349b62c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0349b7e4 with catch @ 0349b828
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0349b738 with catch @ 0349b82c
                        */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

