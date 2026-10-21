// UIFigures.UISkewRect$$MGEMOHEBNPF @ RVA 0x32B7F80

void UIFigures_UISkewRect__MGEMOHEBNPF
               (UIFigures_UISkewRect_o *__this,UnityEngine_UI_VertexHelper_o *BALEEENOIJA,
               UnityEngine_Vector2_o PGFAIJMMOHJ,UnityEngine_Vector2_o IADAOAEBFEB,
               MethodInfo *method)

{
  System_Collections_Generic_List_UIVertex__o *__this_00;
  UnityEngine_UIVertex_array *verts;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Vector3_o EEGKJKNENDE;
  UnityEngine_Vector3_o EEGKJKNENDE_00;
  UnityEngine_Vector3_o EEGKJKNENDE_01;
  UnityEngine_Vector3_o EEGKJKNENDE_02;
  
  fVar3 = PGFAIJMMOHJ.fields.y;
  if ((DAT_04567469 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<UIVertex>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<UIVertex>_ToArray__);
    DAT_04567469 = 1;
  }
  if (BALEEENOIJA != (UnityEngine_UI_VertexHelper_o *)0x0) {
    UnityEngine_UI_VertexHelper__Clear(BALEEENOIJA,(MethodInfo *)0x0);
    lVar1 = *(long *)&(__this->fields)._SkewAngle;
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x18) = 0;
      *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
      fVar2 = tanf(((__this->fields).super.INCPCFENLPJ.fields.x * 3.1415927) / 180.0);
      fVar6 = IADAOAEBFEB.fields.y * -fVar3;
      EEGKJKNENDE.fields.x = IADAOAEBFEB.fields.x * -PGFAIJMMOHJ.fields.x;
      fVar5 = PGFAIJMMOHJ.fields.x * (1.0 - IADAOAEBFEB.fields.x);
      fVar4 = fVar3 * (1.0 - IADAOAEBFEB.fields.y);
      EEGKJKNENDE.fields.y = fVar6;
      EEGKJKNENDE.fields.z = 0.0;
      UIFigures_UISkewRect__HMPCFLIDFEA(__this,EEGKJKNENDE,method_00);
      EEGKJKNENDE_00.fields.y = fVar4;
      EEGKJKNENDE_00.fields.x = EEGKJKNENDE.fields.x + fVar3 * fVar2;
      EEGKJKNENDE_00.fields.z = 0.0;
      UIFigures_UISkewRect__HMPCFLIDFEA(__this,EEGKJKNENDE_00,method_01);
      EEGKJKNENDE_01.fields.y = fVar4;
      EEGKJKNENDE_01.fields.x = fVar5;
      EEGKJKNENDE_01.fields.z = 0.0;
      UIFigures_UISkewRect__HMPCFLIDFEA(__this,EEGKJKNENDE_01,method_02);
      EEGKJKNENDE_02.fields.y = fVar6;
      EEGKJKNENDE_02.fields.x = fVar5 - fVar3 * fVar2;
      EEGKJKNENDE_02.fields.z = 0.0;
      UIFigures_UISkewRect__HMPCFLIDFEA(__this,EEGKJKNENDE_02,method_03);
      __this_00 = *(System_Collections_Generic_List_UIVertex__o **)&(__this->fields)._SkewAngle;
      if (__this_00 != (System_Collections_Generic_List_UIVertex__o *)0x0) {
        verts = System_Collections_Generic_List<UIVertex>__ToArray
                          (__this_00,Method_System_Collections_Generic_List<UIVertex>_ToArray__);
        UnityEngine_UI_VertexHelper__AddUIVertexQuad(BALEEENOIJA,verts,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

