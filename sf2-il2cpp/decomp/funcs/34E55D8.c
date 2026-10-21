// BCAEBMNHBAN$$.ctor @ RVA 0x34E55D8

void BCAEBMNHBAN___ctor(BCAEBMNHBAN_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_Texture__Material__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456875a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<Texture,_Material>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<Texture,_Material>_TypeInfo);
    DAT_0456875a = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<Texture,_Material>_TypeInfo,
                              method);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar1,Method_System_Collections_Generic_Dictionary<Texture,_Material>__ctor__);
  ppSVar2 = &(__this->fields).DOLIDMOELJG;
  *ppSVar2 = (System_Collections_Generic_Dictionary_Texture__Material__o *)pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           thunk_FUN_01bda818(System_Collections_Generic_Dictionary<Texture,_Material>_TypeInfo);
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (pSVar1,Method_System_Collections_Generic_Dictionary<Texture,_Material>__ctor__);
  ppSVar2 = &(__this->fields).PLBHNKLOJNC;
  *ppSVar2 = (System_Collections_Generic_Dictionary_Texture__Material__o *)pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  (__this->fields).BGPDJHKBKCD = true;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

