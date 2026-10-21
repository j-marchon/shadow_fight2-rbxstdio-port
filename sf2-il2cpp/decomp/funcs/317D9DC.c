// Nekki.SF2.Core.Fights.Renders.Model.NodeRenderer$$set_Node @ RVA 0x317D9DC

void Nekki_SF2_Core_Fights_Renders_Model_NodeRenderer__set_Node
               (Nekki_SF2_Core_Fights_Renders_Model_NodeRenderer_o *__this,
               IEFEBEDLHNN_o *CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  UnityEngine_Object_o *x;
  IEFEBEDLHNN_o **ppIVar2;
  
  if ((DAT_04566999 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566999 = 1;
  }
  ppIVar2 = &(__this->fields).HJKLIDCAEOE;
  *ppIVar2 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppIVar2,CJNHFNHJHPE);
  x = (UnityEngine_Object_o *)(__this->fields).ICLKKKJNGGO;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    Nekki_SF2_Core_Fights_Renders_Model_NodeRenderer__HEDOCGMPGKM(__this,method_00);
    return;
  }
  return;
}

