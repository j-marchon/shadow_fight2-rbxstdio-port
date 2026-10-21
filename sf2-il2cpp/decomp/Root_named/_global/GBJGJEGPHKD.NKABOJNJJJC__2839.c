// TypeDefIndex 2839
// Namespace: 
// private class ModelObject.NKABOJNJJJC
// Fields:
//   public List<Capsule> OFIGHMECPGA; // 0x10
//   public List<Triangle> KIDEMGIBKHC; // 0x18

// ===== public void .ctor()  [RVA 0x342F704]
// ModelObject.NKABOJNJJJC$$.ctor @ RVA 0x342F704

void ModelObject_NKABOJNJJJC___ctor(ModelObject_NKABOJNJJJC_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_JGHEMMGMLND__o *__this_00;
  System_Collections_Generic_List_BIDBHCDLLHH__o *__this_01;
  System_Collections_Generic_List_BIDBHCDLLHH__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456816c & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<Capsule>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<Triangle>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<Capsule>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<Triangle>_TypeInfo);
    DAT_0456816c = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_JGHEMMGMLND__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<Capsule>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<Capsule>__ctor__);
  (__this->fields).OFIGHMECPGA = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  __this_01 = (System_Collections_Generic_List_BIDBHCDLLHH__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<Triangle>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             Method_System_Collections_Generic_List<Triangle>__ctor__);
  ppSVar1 = &(__this->fields).KIDEMGIBKHC;
  *ppSVar1 = __this_01;
  thunk_FUN_01c20e04(ppSVar1,__this_01);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

