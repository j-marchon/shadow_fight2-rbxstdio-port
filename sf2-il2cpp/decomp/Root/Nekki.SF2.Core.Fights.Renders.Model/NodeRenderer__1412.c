// TypeDefIndex 1412
// Namespace: Nekki.SF2.Core.Fights.Renders.Model
// public class NodeRenderer : MonoBehaviour
// Fields:
//   private IEFEBEDLHNN HJKLIDCAEOE; // 0x20
//   private LineRenderer ICLKKKJNGGO; // 0x28
//   private int DBGJIDKBHAG; // 0x30
//   private float MJLHADBMJEB; // 0x34
//   private float PAHEPJHJGON; // 0x38

// ===== public void set_SortingOrder(int CJNHFNHJHPE)  [RVA 0x317D82C]
// Nekki.SF2.Core.Fights.Renders.Model.NodeRenderer$$set_SortingOrder @ RVA 0x317D82C

void Nekki_SF2_Core_Fights_Renders_Model_NodeRenderer__set_SortingOrder
               (Nekki_SF2_Core_Fights_Renders_Model_NodeRenderer_o *__this,int32_t CJNHFNHJHPE,
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


// ===== public void .ctor()  [RVA 0x317D848]
// Nekki.SF2.Core.Fights.Renders.Model.NodeRenderer$$.ctor @ RVA 0x317D848

void Nekki_SF2_Core_Fights_Renders_Model_NodeRenderer___ctor
               (Nekki_SF2_Core_Fights_Renders_Model_NodeRenderer_o *__this,MethodInfo *method)

{
  (__this->fields).DBGJIDKBHAG = 10;
  (__this->fields).MJLHADBMJEB = 0.1;
  (__this->fields).PAHEPJHJGON = 0.1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public void set_Color(Color CJNHFNHJHPE)  [RVA 0x317D868]
// Nekki.SF2.Core.Fights.Renders.Model.NodeRenderer$$set_Color @ RVA 0x317D868

void Nekki_SF2_Core_Fights_Renders_Model_NodeRenderer__set_Color
               (Nekki_SF2_Core_Fights_Renders_Model_NodeRenderer_o *__this,
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


// ===== public IEFEBEDLHNN get_Node()  [RVA 0x317D8C8]
// Nekki.SF2.Core.Fights.Renders.Model.NodeRenderer$$get_Node @ RVA 0x317D8C8

IEFEBEDLHNN_o *
Nekki_SF2_Core_Fights_Renders_Model_NodeRenderer__get_Node
          (Nekki_SF2_Core_Fights_Renders_Model_NodeRenderer_o *__this,MethodInfo *method)

{
  return (__this->fields).HJKLIDCAEOE;
}


// ===== private void HEDOCGMPGKM()  [RVA 0x317D8D0]
// Nekki.SF2.Core.Fights.Renders.Model.NodeRenderer$$HEDOCGMPGKM @ RVA 0x317D8D0

void Nekki_SF2_Core_Fights_Renders_Model_NodeRenderer__HEDOCGMPGKM
               (Nekki_SF2_Core_Fights_Renders_Model_NodeRenderer_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_LineRenderer_o *pUVar1;
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *__this_01;
  UnityEngine_Renderer_o *__this_02;
  UnityEngine_LineRenderer_o **ppUVar2;
  
  if ((DAT_04566998 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<LineRenderer>__);
    FUN_01bab630(&UnityEngine_Material_TypeInfo);
    FUN_01bab630(&StringLiteral_12317/*"Sprites/Default"*/);
    DAT_04566998 = 1;
  }
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = (UnityEngine_LineRenderer_o *)
             UnityEngine_GameObject__AddComponent<object>
                       (__this_00,Method_UnityEngine_GameObject_AddComponent<LineRenderer>__);
    ppUVar2 = &(__this->fields).ICLKKKJNGGO;
    *ppUVar2 = pUVar1;
    thunk_FUN_01c20e04(ppUVar2,pUVar1);
    if (*ppUVar2 != (UnityEngine_LineRenderer_o *)0x0) {
      UnityEngine_LineRenderer__set_positionCount
                (*ppUVar2,(__this->fields).DBGJIDKBHAG + 1,(MethodInfo *)0x0);
      __this_02 = (UnityEngine_Renderer_o *)(__this->fields).ICLKKKJNGGO;
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
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void set_Node(IEFEBEDLHNN CJNHFNHJHPE)  [RVA 0x317D9DC]
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


// ===== private void Update()  [RVA 0x317DA78]
// Nekki.SF2.Core.Fights.Renders.Model.NodeRenderer$$Update @ RVA 0x317DA78

void Nekki_SF2_Core_Fights_Renders_Model_NodeRenderer__Update
               (Nekki_SF2_Core_Fights_Renders_Model_NodeRenderer_o *__this,MethodInfo *method)

{
  int iVar1;
  IEFEBEDLHNN_o *pIVar2;
  int index;
  UnityEngine_LineRenderer_o *__this_00;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o position;
  float fStack_28;
  float fStack_24;
  
  if (0 < (__this->fields).DBGJIDKBHAG + 1) {
    index = 0;
    fVar3 = 20.0;
    do {
      pIVar2 = (__this->fields).HJKLIDCAEOE;
      if (pIVar2 == (IEFEBEDLHNN_o *)0x0) {
LAB_0327db6c:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      fVar4 = (__this->fields).MJLHADBMJEB;
      fVar5 = (__this->fields).PAHEPJHJGON;
      UVar6 = CNDPAJOLKFN__ALBJPLAPOBO((pIVar2->fields).CNMHHKAMGPI,(MethodInfo *)0x0);
      __this_00 = (__this->fields).ICLKKKJNGGO;
      if (__this_00 == (UnityEngine_LineRenderer_o *)0x0) goto LAB_0327db6c;
      sincosf(fVar3 * 0.017453292,&fStack_24,&fStack_28);
      position.fields.y = fStack_28 * fVar5 + UVar6.fields.y;
      position.fields.x = fStack_24 * fVar4 + UVar6.fields.x;
      position.fields.z = UVar6.fields.z + -1.0;
      UnityEngine_LineRenderer__SetPosition(__this_00,index,position,(MethodInfo *)0x0);
      iVar1 = (__this->fields).DBGJIDKBHAG;
      index = index + 1;
      fVar3 = fVar3 + 360.0 / (float)iVar1;
    } while (index < iVar1 + 1);
  }
  return;
}


// ===== private void MIFGEEIAPBG()  [RVA 0x317DA7C]
// Nekki.SF2.Core.Fights.Renders.Model.NodeRenderer$$MIFGEEIAPBG @ RVA 0x317DA7C

void Nekki_SF2_Core_Fights_Renders_Model_NodeRenderer__MIFGEEIAPBG
               (Nekki_SF2_Core_Fights_Renders_Model_NodeRenderer_o *__this,MethodInfo *method)

{
  int iVar1;
  IEFEBEDLHNN_o *pIVar2;
  int index;
  UnityEngine_LineRenderer_o *__this_00;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o position;
  float local_28;
  float fStack_24;
  
  if (0 < (__this->fields).DBGJIDKBHAG + 1) {
    index = 0;
    fVar3 = 20.0;
    do {
      pIVar2 = (__this->fields).HJKLIDCAEOE;
      if (pIVar2 == (IEFEBEDLHNN_o *)0x0) {
LAB_0327db6c:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      fVar4 = (__this->fields).MJLHADBMJEB;
      fVar5 = (__this->fields).PAHEPJHJGON;
      UVar6 = CNDPAJOLKFN__ALBJPLAPOBO((pIVar2->fields).CNMHHKAMGPI,(MethodInfo *)0x0);
      __this_00 = (__this->fields).ICLKKKJNGGO;
      if (__this_00 == (UnityEngine_LineRenderer_o *)0x0) goto LAB_0327db6c;
      sincosf(fVar3 * 0.017453292,&fStack_24,&local_28);
      position.fields.y = local_28 * fVar5 + UVar6.fields.y;
      position.fields.x = fStack_24 * fVar4 + UVar6.fields.x;
      position.fields.z = UVar6.fields.z + -1.0;
      UnityEngine_LineRenderer__SetPosition(__this_00,index,position,(MethodInfo *)0x0);
      iVar1 = (__this->fields).DBGJIDKBHAG;
      index = index + 1;
      fVar3 = fVar3 + 360.0 / (float)iVar1;
    } while (index < iVar1 + 1);
  }
  return;
}

