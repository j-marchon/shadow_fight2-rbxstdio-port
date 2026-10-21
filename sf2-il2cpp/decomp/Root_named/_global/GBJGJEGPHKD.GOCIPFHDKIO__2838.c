// TypeDefIndex 2838
// Namespace: 
// private class ModelObject.GOCIPFHDKIO
// Fields:
//   public List<ModelEdge> AMJPHGIJPON; // 0x10
//   public List<ModelEdge> BEFGKHJKHJG; // 0x18
//   public List<ModelEdge> CKBPKJHOEAK; // 0x20
//   public List<ModelEdge> DMFCLEMPPIM; // 0x28

// ===== public void .ctor()  [RVA 0x342F610]
// ModelObject.GOCIPFHDKIO$$.ctor @ RVA 0x342F610

void ModelObject_GOCIPFHDKIO___ctor(ModelObject_GOCIPFHDKIO_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_GEBHIBIEAJE__o *pSVar1;
  System_Collections_Generic_List_GEBHIBIEAJE__o **ppSVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456816b & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelEdge>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ModelEdge>_TypeInfo);
    DAT_0456816b = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_List_GEBHIBIEAJE__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ModelEdge>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<ModelEdge>__ctor__);
  (__this->fields).AMJPHGIJPON = pSVar1;
  thunk_FUN_01c20e04(&__this->fields,pSVar1);
  pSVar1 = (System_Collections_Generic_List_GEBHIBIEAJE__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ModelEdge>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<ModelEdge>__ctor__);
  ppSVar2 = &(__this->fields).BEFGKHJKHJG;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_GEBHIBIEAJE__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ModelEdge>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<ModelEdge>__ctor__);
  ppSVar2 = &(__this->fields).CKBPKJHOEAK;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  pSVar1 = (System_Collections_Generic_List_GEBHIBIEAJE__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ModelEdge>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<ModelEdge>__ctor__);
  ppSVar2 = &(__this->fields).DMFCLEMPPIM;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

