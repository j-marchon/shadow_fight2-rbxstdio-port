// NIELMODLCLC$$.ctor @ RVA 0x35976E8

void NIELMODLCLC___ctor(NIELMODLCLC_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ObscuredString__o *__this_00;
  System_Collections_Generic_List_ObscuredString__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04568da6 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ObscuredString>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ObscuredString>_TypeInfo);
    DAT_04568da6 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_ObscuredString__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ObscuredString>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ObscuredString>__ctor__);
  ppSVar1 = &(__this->fields).DMEBCLCBAOE;
                    /* try { // try from 0369774c to 03797753 has its CatchHandler @ 036977b8 */
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
                    /* try { // try from 0369775c to 03797767 has its CatchHandler @ 036977b4 */
                    /* try { // try from 03697768 to 037977ab has its CatchHandler @ 03697584 */
  EAAHMDAMHNI___ctor((EAAHMDAMHNI_o *)__this,(MethodInfo *)0x0);
  return;
}

