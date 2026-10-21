// BCPODJMEKMJ$$.ctor @ RVA 0x31BE6D4

void BCPODJMEKMJ___ctor(BCPODJMEKMJ_o *__this,System_String_o *KGLJICLJHEL,
                       CNDPAJOLKFN_o *FJJJGOHDLBH,MethodInfo *method)

{
  System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *__this_00;
  System_Collections_Generic_List_MGNDHCBAPEN_string__float___o **ppSVar1;
  System_Collections_Generic_List_MGNDHCBAPEN_IEFEBEDLHNN__float___o *__this_01;
  System_Collections_Generic_List_MGNDHCBAPEN_IEFEBEDLHNN__float___o **ppSVar2;
  
  if ((DAT_04566c04 & 1) == 0) {
    FUN_01bab630(&IEFEBEDLHNN_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<IEFEBEDLHNN,_float>>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<IEFEBEDLHNN,_float>>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_TypeInfo);
    DAT_04566c04 = 1;
  }
  __this_00 = (System_Collections_Generic_List_MGNDHCBAPEN_string__float___o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>_TypeInfo
                                );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_float>>__ctor__);
  ppSVar1 = &(__this->fields).AGJPNDANDGC;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  __this_01 = (System_Collections_Generic_List_MGNDHCBAPEN_IEFEBEDLHNN__float___o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_List<MGNDHCBAPEN<IEFEBEDLHNN,_float>>_TypeInfo
                                );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<IEFEBEDLHNN,_float>>__ctor__);
  ppSVar2 = &(__this->fields).PLMBJNAAGOI;
  *ppSVar2 = __this_01;
  thunk_FUN_01c20e04(ppSVar2,__this_01);
  if ((IEFEBEDLHNN_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  IEFEBEDLHNN___ctor((IEFEBEDLHNN_o *)__this,KGLJICLJHEL,FJJJGOHDLBH,(MethodInfo *)0x0);
  IEFEBEDLHNN__GNLPNKGBAFL((IEFEBEDLHNN_o *)__this,1,(MethodInfo *)0x0);
  return;
}

