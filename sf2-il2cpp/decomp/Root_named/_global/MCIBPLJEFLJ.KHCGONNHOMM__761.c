// TypeDefIndex 761
// Namespace: 
// public class ModelCollision.KHCGONNHOMM
// Fields:
//   public ModelEdge POPNNGCHBML; // 0x10
//   public ModelEdge GBPPPKHOPEA; // 0x18
//   private Vector3f BPILADHMHBB; // 0x20
//   private Vector3f HNNCKGOBKLK; // 0x28

// ===== public void OCIGNBBDLEL(Vector3f CJNHFNHJHPE)  [RVA 0x3050438]
// ModelCollision.KHCGONNHOMM$$OCIGNBBDLEL @ RVA 0x3050438

void ModelCollision_KHCGONNHOMM__OCIGNBBDLEL
               (ModelCollision_KHCGONNHOMM_o *__this,Vector3f_o *CJNHFNHJHPE,MethodInfo *method)

{
  Vector3f_o *__this_00;
  
  __this_00 = (__this->fields).HNNCKGOBKLK;
  if (__this_00 != (Vector3f_o *)0x0) {
    Vector3f__FOOHBJNHOKK(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3050504]
// ModelCollision.KHCGONNHOMM$$.ctor @ RVA 0x3050504

void ModelCollision_KHCGONNHOMM___ctor(ModelCollision_KHCGONNHOMM_o *__this,MethodInfo *method)

{
  Vector3f_o *pCVar1;
  Vector3f_o **ppCVar2;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565e47 & 1) == 0) {
    FUN_01bab630(&Vector3f_TypeInfo);
    DAT_04565e47 = 1;
    method = extraout_x1;
  }
  pCVar1 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo,method);
  Vector3f___ctor(pCVar1,(MethodInfo *)0x0);
  ppCVar2 = &(__this->fields).BPILADHMHBB;
  *ppCVar2 = pCVar1;
  thunk_FUN_01c20e04(ppCVar2,pCVar1);
  pCVar1 = (Vector3f_o *)thunk_FUN_01bda818(Vector3f_TypeInfo);
  Vector3f___ctor(pCVar1,(MethodInfo *)0x0);
  ppCVar2 = &(__this->fields).HNNCKGOBKLK;
  *ppCVar2 = pCVar1;
  thunk_FUN_01c20e04(ppCVar2,pCVar1);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public Vector3f NOKNGPKCPDH()  [RVA 0x30505E4]
// ModelCollision.KHCGONNHOMM$$NOKNGPKCPDH @ RVA 0x30505E4

Vector3f_o *
ModelCollision_KHCGONNHOMM__NOKNGPKCPDH(ModelCollision_KHCGONNHOMM_o *__this,MethodInfo *method)

{
  return (__this->fields).BPILADHMHBB;
}


// ===== public void DEAJKMHGGDA(Vector3f CJNHFNHJHPE)  [RVA 0x305041C]
// ModelCollision.KHCGONNHOMM$$DEAJKMHGGDA @ RVA 0x305041C

void ModelCollision_KHCGONNHOMM__DEAJKMHGGDA
               (ModelCollision_KHCGONNHOMM_o *__this,Vector3f_o *CJNHFNHJHPE,MethodInfo *method)

{
  Vector3f_o *__this_00;
  
  __this_00 = (__this->fields).BPILADHMHBB;
  if (__this_00 != (Vector3f_o *)0x0) {
    Vector3f__FOOHBJNHOKK(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public Vector3f NKLAGPEPOHH()  [RVA 0x30505EC]
// ModelCollision.KHCGONNHOMM$$NKLAGPEPOHH @ RVA 0x30505EC

Vector3f_o *
ModelCollision_KHCGONNHOMM__NKLAGPEPOHH(ModelCollision_KHCGONNHOMM_o *__this,MethodInfo *method)

{
  return (__this->fields).HNNCKGOBKLK;
}

