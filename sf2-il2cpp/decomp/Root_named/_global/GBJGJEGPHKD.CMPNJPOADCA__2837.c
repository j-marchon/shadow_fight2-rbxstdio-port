// TypeDefIndex 2837
// Namespace: 
// private class ModelObject.CMPNJPOADCA
// Fields:
//   public ModelNode LNBKBMNLJNG; // 0x10
//   public List<ModelNode> AMJPHGIJPON; // 0x18
//   public List<ModelMacroNode> NNBACGACIKH; // 0x20
//   public List<ModelNode> DMFCLEMPPIM; // 0x28
//   public Dictionary<string, ModelNode> NHPHHKCGHNM; // 0x30
//   public List<ModelNode> FMNFMACCAKD; // 0x38

// ===== public void .ctor()  [RVA 0x342F498]
// ModelObject.CMPNJPOADCA$$.ctor @ RVA 0x342F498

void ModelObject_CMPNJPOADCA___ctor(ModelObject_CMPNJPOADCA_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_IEFEBEDLHNN__o *pSVar1;
  System_Collections_Generic_List_IEFEBEDLHNN__o **ppSVar2;
  System_Collections_Generic_List_BCPODJMEKMJ__o *__this_00;
  System_Collections_Generic_List_BCPODJMEKMJ__o **ppSVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_Dictionary_string__IEFEBEDLHNN__o **ppSVar4;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456816a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_IEFEBEDLHNN>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_IEFEBEDLHNN>_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelMacroNode>__ctor__);
    FUN_01bab630(&Method_System_Collections_Generic_List<ModelNode>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<ModelMacroNode>_TypeInfo);
    FUN_01bab630(&System_Collections_Generic_List<ModelNode>_TypeInfo);
    DAT_0456816a = 1;
    method = extraout_x1;
  }
  pSVar1 = (System_Collections_Generic_List_IEFEBEDLHNN__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ModelNode>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<ModelNode>__ctor__);
  ppSVar2 = &(__this->fields).AMJPHGIJPON;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  __this_00 = (System_Collections_Generic_List_BCPODJMEKMJ__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<ModelMacroNode>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<ModelMacroNode>__ctor__);
  ppSVar3 = &(__this->fields).NNBACGACIKH;
  *ppSVar3 = __this_00;
  thunk_FUN_01c20e04(ppSVar3,__this_00);
  pSVar1 = (System_Collections_Generic_List_IEFEBEDLHNN__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ModelNode>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<ModelNode>__ctor__);
  ppSVar2 = &(__this->fields).DMFCLEMPPIM;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_Dictionary<string,_IEFEBEDLHNN>_TypeInfo
                                );
  System_Collections_Generic_Dictionary<object,_object>___ctor
            (__this_01,Method_System_Collections_Generic_Dictionary<string,_IEFEBEDLHNN>__ctor__);
  ppSVar4 = &(__this->fields).NHPHHKCGHNM;
  *ppSVar4 = (System_Collections_Generic_Dictionary_string__IEFEBEDLHNN__o *)__this_01;
  thunk_FUN_01c20e04(ppSVar4,__this_01);
  pSVar1 = (System_Collections_Generic_List_IEFEBEDLHNN__o *)
           thunk_FUN_01bda818(System_Collections_Generic_List<ModelNode>_TypeInfo);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)pSVar1,
             Method_System_Collections_Generic_List<ModelNode>__ctor__);
  ppSVar2 = &(__this->fields).FMNFMACCAKD;
  *ppSVar2 = pSVar1;
  thunk_FUN_01c20e04(ppSVar2,pSVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

