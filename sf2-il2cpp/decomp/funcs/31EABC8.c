// IGFJINHNIBB$$.ctor @ RVA 0x31EABC8

void IGFJINHNIBB___ctor(IGFJINHNIBB_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_CELDGLHBCAM__o *__this_00;
  System_Collections_Generic_List_CELDGLHBCAM__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04566d92 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<CELDGLHBCAM>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<CELDGLHBCAM>_TypeInfo);
    DAT_04566d92 = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_CELDGLHBCAM__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<CELDGLHBCAM>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<CELDGLHBCAM>__ctor__);
  ppSVar1 = &(__this->fields).CHAJPCCNGAI;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

