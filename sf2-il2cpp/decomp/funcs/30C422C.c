// MDAPDLLMOMF$$.ctor @ RVA 0x30C422C

void MDAPDLLMOMF___ctor(MDAPDLLMOMF_o *__this,MethodInfo *method)

{
  MDAPDLLMOMF_NHJGACDEAGK_o *pMVar1;
  MDAPDLLMOMF_NHJGACDEAGK_o **ppMVar2;
  System_Collections_Generic_List_MDAPDLLMOMF_DOPLCEEGPAO__o *__this_00;
  System_Collections_Generic_List_string__o *pSVar3;
  System_Collections_Generic_List_MGNDHCBAPEN_string__ObscuredFloat___o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *in_x3;
  
  if ((DAT_0456629d & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MDAPDLLMOMF_DOPLCEEGPAO>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_ObscuredFloat>>__ctor__
                );
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MDAPDLLMOMF_DOPLCEEGPAO>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<string,_ObscuredFloat>>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    FUN_01bab630(&MDAPDLLMOMF_NHJGACDEAGK_TypeInfo);
    DAT_0456629d = 1;
    method = extraout_x1;
  }
  pMVar1 = (MDAPDLLMOMF_NHJGACDEAGK_o *)thunk_FUN_01bda818(MDAPDLLMOMF_NHJGACDEAGK_TypeInfo,method);
  MDAPDLLMOMF_NHJGACDEAGK___ctor(pMVar1,1.0,1.0,false,false,in_x3);
  ppMVar2 = &(__this->fields).FNCEJEPEFGA;
  *ppMVar2 = pMVar1;
  thunk_FUN_01c20e04(ppMVar2,pMVar1);
  pMVar1 = (MDAPDLLMOMF_NHJGACDEAGK_o *)thunk_FUN_01bda818(MDAPDLLMOMF_NHJGACDEAGK_TypeInfo);
  MDAPDLLMOMF_NHJGACDEAGK___ctor(pMVar1,1.0,1.0,false,false,in_x3);
  ppMVar2 = &(__this->fields).FPDBFMBILJI;
  *ppMVar2 = pMVar1;
  thunk_FUN_01c20e04(ppMVar2,pMVar1);
  __this_00 = (System_Collections_Generic_List_MDAPDLLMOMF_DOPLCEEGPAO__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<MDAPDLLMOMF_DOPLCEEGPAO>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MDAPDLLMOMF_DOPLCEEGPAO>__ctor__);
  (__this->fields).FMECFCOEJCJ = __this_00;
  thunk_FUN_01c20e04(&(__this->fields).FMECFCOEJCJ,__this_00);
  pSVar3 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<string>__ctor__);
  (__this->fields).OBLNHNJPBOJ = pSVar3;
  thunk_FUN_01c20e04(&(__this->fields).OBLNHNJPBOJ,pSVar3);
  __this_01 = (System_Collections_Generic_List_MGNDHCBAPEN_string__ObscuredFloat___o *)
              thunk_FUN_01bda818(
                                System_Collections_Generic_List<MGNDHCBAPEN<string,_ObscuredFloat>>_TypeInfo
                                );
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_ObscuredFloat>>__ctor__);
  (__this->fields).AKKFNCFAPDO = __this_01;
  thunk_FUN_01c20e04(&(__this->fields).AKKFNCFAPDO,__this_01);
  pSVar3 = (System_Collections_Generic_List_string__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             Method_System_Collections_Generic_List<string>__ctor__);
  (__this->fields).NMNPMFBJBPK = pSVar3;
  thunk_FUN_01c20e04(&(__this->fields).NMNPMFBJBPK,pSVar3);
  JADGCGOJLJB___ctor((JADGCGOJLJB_o *)__this,4,(MethodInfo *)0x0);
  return;
}

