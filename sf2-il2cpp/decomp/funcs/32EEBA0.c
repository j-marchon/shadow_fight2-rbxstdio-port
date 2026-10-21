// KBFGKFAKGPP$$.ctor @ RVA 0x32EEBA0

void KBFGKFAKGPP___ctor(KBFGKFAKGPP_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GLCAPECMBLM__o *pSVar1;
  System_Collections_Generic_List_GLCAPECMBLM__o **ppSVar2;
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *extraout_x1;
  
                    /* try { // try from 033eebd0 to 034eec1f has its CatchHandler @ 033eed68 */
  if ((DAT_0456765e & 1) == 0) {
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<GLCAPECMBLM>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<GLCAPECMBLM>_TypeInfo);
    FUN_01bab630(&StringLiteral_5643);
    DAT_0456765e = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_List_GLCAPECMBLM__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<GLCAPECMBLM>_TypeInfo,method);
                    /* try { // try from 033eec20 to 034eec2f has its CatchHandler @ 033eed58 */
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<GLCAPECMBLM>__ctor__);
  ppSVar2 = &(__this->fields).FIFCACFAFPH;
                    /* try { // try from 033eec30 to 034eed33 has its CatchHandler @ 033eea44 */
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_GLCAPECMBLM__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<GLCAPECMBLM>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<GLCAPECMBLM>__ctor__);
  ppSVar2 = &(__this->fields).PLNIEGAECMC;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  __this_00 = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
  UnityEngine_GameObject___ctor(__this_00,StringLiteral_5643,(MethodInfo *)0x0);
  (__this->fields).LDAKOINICNJ = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  return;
}

