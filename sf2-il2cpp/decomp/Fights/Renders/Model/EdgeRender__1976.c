// TypeDefIndex 1976
// Namespace: Nekki.SF2.Core.Fights.Renders.Model
// public class EdgeRender : MonoBehaviour
// Fields:
//   private ModelEdge MOBCMLECDOO; // 0x20
//   private LineRenderer ICLKKKJNGGO; // 0x28

// ===== public void set_Edge(ModelEdge CJNHFNHJHPE)  [RVA 0x328F094]
// Nekki.SF2.Core.Fights.Renders.Model.EdgeRender$$set_Edge @ RVA 0x328F094

void Nekki_SF2_Core_Fights_Renders_Model_EdgeRender__set_Edge
               (Nekki_SF2_Core_Fights_Renders_Model_EdgeRender_o *__this,ModelEdge_o *CJNHFNHJHPE,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  UnityEngine_Object_o *x;
  ModelEdge_o **ppGVar2;
  
                    /* try { // try from 0338f0b0 to 0348f0db has its CatchHandler @ 0338f0fc */
  if ((DAT_04567305 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04567305 = 1;
  }
  ppGVar2 = &(__this->fields).MOBCMLECDOO;
  *ppGVar2 = CJNHFNHJHPE;
  thunk_FUN_01c20e04(ppGVar2,CJNHFNHJHPE);
                    /* try { // try from 0338f0e8 to 0348f0eb has its CatchHandler @ 0338f108 */
  x = (UnityEngine_Object_o *)(__this->fields).ICLKKKJNGGO;
                    /* try { // try from 0338f0ec to 0348f0ef has its CatchHandler @ 0338f100 */
                    /* try { // try from 0338f0f0 to 0348f0f3 has its CatchHandler @ 0338f0f4 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338f0f0 with catch @ 0338f0f4
                       try { // try from 0338f0f4 to 0348f123 has its CatchHandler @ 0338ef68 */
    thunk_FUN_01ba7564();
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338f06c with catch @ 0338f0f8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338f0b0 with catch @ 0338f0fc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338f0ec with catch @ 0338f100
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338f03c with catch @ 0338f104
                        */
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338f0e8 with catch @ 0338f108
                        */
  if (bVar1) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0338efd4 with catch @ 0338f10c
                        */
    Nekki_SF2_Core_Fights_Renders_Model_EdgeRender__HEDOCGMPGKM(__this,method_00);
    return;
  }
                    /* try { // try from 0338f124 to 0348f13b has its CatchHandler @ 0338f194 */
  return;
}


// ===== private void Update()  [RVA 0x328F220]
// Nekki.SF2.Core.Fights.Renders.Model.EdgeRender$$Update @ RVA 0x328F220

void Nekki_SF2_Core_Fights_Renders_Model_EdgeRender__Update
               (Nekki_SF2_Core_Fights_Renders_Model_EdgeRender_o *__this,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *pUVar1;
  ModelEdge_o *pGVar2;
  ModelNode_o *pIVar3;
  ModelNode_o *pIVar4;
  Vector3f_o *pCVar5;
  Vector3f_o *pCVar6;
  float fVar7;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o position_00;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_90;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_78;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_60;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_Fields local_40;
  
  pGVar2 = (__this->fields).MOBCMLECDOO;
  if ((((pGVar2 != (ModelEdge_o *)0x0) &&
       (pIVar4 = (pGVar2->fields)._HDEPMIOPNAJ_k__BackingField, pIVar4 != (ModelNode_o *)0x0)) &&
      (pIVar3 = (pGVar2->fields)._GNLFCODFOOM_k__BackingField, pIVar3 != (ModelNode_o *)0x0)) &&
     ((pCVar5 = (pIVar4->fields).CNMHHKAMGPI, pCVar5 != (Vector3f_o *)0x0 &&
      (pUVar1 = (__this->fields).ICLKKKJNGGO, pUVar1 != (UnityEngine_LineRenderer_o *)0x0)))) {
    pCVar6 = (pIVar3->fields).CNMHHKAMGPI;
    position.fields.z = -1.0;
    position.fields.x = (pCVar5->fields).super.OHHDBINAJCB;
    position.fields.y = (pCVar5->fields).super.JOLEIODMLFL;
    UnityEngine_LineRenderer__SetPosition(pUVar1,0,position,(MethodInfo *)0x0);
    if ((pCVar6 != (Vector3f_o *)0x0) &&
       (pUVar1 = (__this->fields).ICLKKKJNGGO, pUVar1 != (UnityEngine_LineRenderer_o *)0x0)) {
      position_00.fields.z = -1.0;
      position_00.fields.x = (pCVar6->fields).super.OHHDBINAJCB;
      position_00.fields.y = (pCVar6->fields).super.JOLEIODMLFL;
      UnityEngine_LineRenderer__SetPosition(pUVar1,1,position_00,(MethodInfo *)0x0);
      pGVar2 = (__this->fields).MOBCMLECDOO;
      if (pGVar2 != (ModelEdge_o *)0x0) {
        local_60.fakeValueActive = (pGVar2->fields).MPJJBPFKHIB.fields.fakeValueActive;
        local_60.inited = (pGVar2->fields).MPJJBPFKHIB.fields.inited;
        local_60._18_2_ = *(undefined2 *)&(pGVar2->fields).MPJJBPFKHIB.fields.field_0x12;
        local_60.hiddenValueOldByte4.fields =
             (pGVar2->fields).MPJJBPFKHIB.fields.hiddenValueOldByte4.fields;
        local_60.fakeValue = (pGVar2->fields).MPJJBPFKHIB.fields.fakeValue;
        local_60.currentCryptoKey = (pGVar2->fields).MPJJBPFKHIB.fields.currentCryptoKey;
        local_60.hiddenValue = (pGVar2->fields).MPJJBPFKHIB.fields.hiddenValue;
        fVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_60,
                           (MethodInfo *)0x0);
        if (fVar7 <= 0.0) {
          CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                    ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_78,1.0,
                     (MethodInfo *)0x0);
          local_40.hiddenValueOldByte4.fields = local_78.hiddenValueOldByte4.fields;
          local_40.fakeValue = local_78.fakeValue;
          local_40.currentCryptoKey = local_78.currentCryptoKey;
          local_40.hiddenValue = local_78.hiddenValue;
          local_40.fakeValueActive = local_78.fakeValueActive;
          local_40.inited = local_78.inited;
          local_40._18_2_ = local_78._18_2_;
        }
        else {
          pGVar2 = (__this->fields).MOBCMLECDOO;
          if (pGVar2 == (ModelEdge_o *)0x0) goto LAB_0338f354;
          local_40.fakeValueActive = (pGVar2->fields).MPJJBPFKHIB.fields.fakeValueActive;
          local_40.inited = (pGVar2->fields).MPJJBPFKHIB.fields.inited;
          local_40._18_2_ = *(undefined2 *)&(pGVar2->fields).MPJJBPFKHIB.fields.field_0x12;
          local_40.hiddenValueOldByte4.fields =
               (pGVar2->fields).MPJJBPFKHIB.fields.hiddenValueOldByte4.fields;
          local_40.fakeValue = (pGVar2->fields).MPJJBPFKHIB.fields.fakeValue;
          local_40.currentCryptoKey = (pGVar2->fields).MPJJBPFKHIB.fields.currentCryptoKey;
          local_40.hiddenValue = (pGVar2->fields).MPJJBPFKHIB.fields.hiddenValue;
        }
        local_90.hiddenValueOldByte4.fields = local_40.hiddenValueOldByte4.fields;
        local_90.fakeValue = local_40.fakeValue;
        local_90.currentCryptoKey = local_40.currentCryptoKey;
        local_90.hiddenValue = local_40.hiddenValue;
        local_90.fakeValueActive = local_40.fakeValueActive;
        local_90.inited = local_40.inited;
        local_90._18_2_ = local_40._18_2_;
        fVar7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat__ALBJPLAPOBO
                          ((CodeStage_AntiCheat_ObscuredTypes_ObscuredFloat_o *)&local_90,
                           (MethodInfo *)0x0);
        pUVar1 = (__this->fields).ICLKKKJNGGO;
        if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
          UnityEngine_LineRenderer__set_startWidth(pUVar1,fVar7,(MethodInfo *)0x0);
          pUVar1 = (__this->fields).ICLKKKJNGGO;
          if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
            UnityEngine_LineRenderer__set_endWidth(pUVar1,fVar7,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
LAB_0338f354:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_Color(Color CJNHFNHJHPE)  [RVA 0x328F358]
// Nekki.SF2.Core.Fights.Renders.Model.EdgeRender$$set_Color @ RVA 0x328F358

void Nekki_SF2_Core_Fights_Renders_Model_EdgeRender__set_Color
               (Nekki_SF2_Core_Fights_Renders_Model_EdgeRender_o *__this,
               UnityEngine_Color_o CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_LineRenderer_o *pUVar1;
  
  pUVar1 = (__this->fields).ICLKKKJNGGO;
  if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
    UnityEngine_LineRenderer__set_startColor(pUVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).ICLKKKJNGGO;
    if (pUVar1 != (UnityEngine_LineRenderer_o *)0x0) {
      UnityEngine_LineRenderer__set_endColor(pUVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x328F3B8]
// Nekki.SF2.Core.Fights.Renders.Model.EdgeRender$$.ctor @ RVA 0x328F3B8

void Nekki_SF2_Core_Fights_Renders_Model_EdgeRender___ctor
               (Nekki_SF2_Core_Fights_Renders_Model_EdgeRender_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private void HEDOCGMPGKM()  [RVA 0x328F130]
// Nekki.SF2.Core.Fights.Renders.Model.EdgeRender$$HEDOCGMPGKM @ RVA 0x328F130

void Nekki_SF2_Core_Fights_Renders_Model_EdgeRender__HEDOCGMPGKM
               (Nekki_SF2_Core_Fights_Renders_Model_EdgeRender_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_LineRenderer_o *pUVar1;
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *__this_01;
  UnityEngine_LineRenderer_o **ppUVar2;
  UnityEngine_Renderer_o *__this_02;
  
                    /* try { // try from 0338f13c to 0348f183 has its CatchHandler @ 0338ef68 */
  if ((DAT_04567306 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<LineRenderer>__);
    FUN_01bab630(&UnityEngine_Material_TypeInfo);
    FUN_01bab630(&StringLiteral_12317/*"Sprites/Default"*/);
    DAT_04567306 = 1;
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    /* try { // try from 0338f184 to 0348f193 has its CatchHandler @ 0338f194 */
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
                    /* catch() { ... } // from try @ 0338f124 with catch @ 0338f194
                       catch() { ... } // from try @ 0338f184 with catch @ 0338f194 */
                    /* try { // try from 0338f198 to 0348f19b has its CatchHandler @ 0338f1a4 */
                    /* try { // try from 0338f19c to 0348f1a7 has its CatchHandler @ 0338ef68 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0338f198 with catch @ 0338f1a4
                        */
    pUVar1 = (UnityEngine_LineRenderer_o *)
             UnityEngine_GameObject__AddComponent<object>
                       (__this_00,Method_UnityEngine_GameObject_AddComponent<LineRenderer>__);
    ppUVar2 = &(__this->fields).ICLKKKJNGGO;
    *ppUVar2 = pUVar1;
    thunk_FUN_01c20e04(ppUVar2,pUVar1);
    __this_02 = (UnityEngine_Renderer_o *)*ppUVar2;
    shader = UnityEngine_Shader__Find(StringLiteral_12317/*"Sprites/Default"*/,(MethodInfo *)0x0);
    __this_01 = (UnityEngine_Material_o *)thunk_FUN_01bda818(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(__this_01,shader,(MethodInfo *)0x0);
    if (__this_02 != (UnityEngine_Renderer_o *)0x0) {
      UnityEngine_Renderer__set_material(__this_02,__this_01,(MethodInfo *)0x0);
      if (*ppUVar2 != (UnityEngine_LineRenderer_o *)0x0) {
        UnityEngine_LineRenderer__set_useWorldSpace(*ppUVar2,false,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public ModelEdge get_Edge()  [RVA 0x328F3C0]
// Nekki.SF2.Core.Fights.Renders.Model.EdgeRender$$get_Edge @ RVA 0x328F3C0

ModelEdge_o *
Nekki_SF2_Core_Fights_Renders_Model_EdgeRender__get_Edge
          (Nekki_SF2_Core_Fights_Renders_Model_EdgeRender_o *__this,MethodInfo *method)

{
  return (__this->fields).MOBCMLECDOO;
}


// ===== public void set_SortingOrder(int CJNHFNHJHPE)  [RVA 0x328F3C8]
// Nekki.SF2.Core.Fights.Renders.Model.EdgeRender$$set_SortingOrder @ RVA 0x328F3C8

void Nekki_SF2_Core_Fights_Renders_Model_EdgeRender__set_SortingOrder
               (Nekki_SF2_Core_Fights_Renders_Model_EdgeRender_o *__this,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
  
  __this_00 = (UnityEngine_Renderer_o *)(__this->fields).ICLKKKJNGGO;
  if (__this_00 != (UnityEngine_Renderer_o *)0x0) {
    UnityEngine_Renderer__set_sortingOrder(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

