// GLDKIFOLMAO$$.ctor @ RVA 0x3294784

void GLDKIFOLMAO___ctor(GLDKIFOLMAO_o *__this,UnityEngine_Purchasing_Product_o *IPIHMPBGACB,
                       MethodInfo *method)

{
  UnityEngine_Purchasing_ProductDefinition_o *pUVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((IPIHMPBGACB != (UnityEngine_Purchasing_Product_o *)0x0) &&
     (pUVar1 = (IPIHMPBGACB->fields)._definition_k__BackingField,
     pUVar1 != (UnityEngine_Purchasing_ProductDefinition_o *)0x0)) {
    (__this->fields)._CIEBCKIBJHL_k__BackingField = (pUVar1->fields)._id_k__BackingField;
    thunk_FUN_01c20e04();
    GLDKIFOLMAO__LLCONNGHGKD(__this,IPIHMPBGACB,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

