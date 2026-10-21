// BPDOKJBGHAG$$.ctor @ RVA 0x3155978

void BPDOKJBGHAG___ctor(BPDOKJBGHAG_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_PONNKDFAMFM__o *__this_00;
  System_Collections_Generic_List_PONNKDFAMFM__o **ppSVar1;
  
  if ((DAT_0456683a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PONNKDFAMFM>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<PONNKDFAMFM>_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    DAT_0456683a = 1;
  }
  (__this->fields).BGHFADDGPAD = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
                    /* try { // try from 032559f4 to 033559fb has its CatchHandler @ 03256680 */
  (__this->fields).HNNFBCMNGIA = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
                    /* try { // try from 03255a0c to 03355a13 has its CatchHandler @ 03256668 */
  __this_00 = (System_Collections_Generic_List_PONNKDFAMFM__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<PONNKDFAMFM>_TypeInfo);
                    /* try { // try from 03255a14 to 03355a2f has its CatchHandler @ 03256710 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<PONNKDFAMFM>__ctor__);
  ppSVar1 = &(__this->fields).NBDCLLADIFL;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
                    /* try { // try from 03255a3c to 03355a43 has its CatchHandler @ 03256674 */
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

