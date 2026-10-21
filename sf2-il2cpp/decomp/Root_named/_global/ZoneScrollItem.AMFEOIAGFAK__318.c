// TypeDefIndex 318
// Namespace: 
// [CompilerGenerated]
// private sealed class ZoneScrollItem.AMFEOIAGFAK
// Fields:
//   public Vector2 currentButtonPos; // 0x10

// ===== internal int JKKDMDHLGNA(BattleButton p_a, BattleButton p_b)  [RVA 0x3349578]
// Nekki.SF2.GUI.Map.ZoneScrollItem.AMFEOIAGFAK$$JKKDMDHLGNA @ RVA 0x3349578

int32_t Nekki_SF2_GUI_Map_ZoneScrollItem_AMFEOIAGFAK__JKKDMDHLGNA
                  (Nekki_SF2_GUI_Map_ZoneScrollItem_AMFEOIAGFAK_o *__this,
                  Nekki_SF2_GUI_Map_BattleButton_o *p_a,Nekki_SF2_GUI_Map_BattleButton_o *p_b,
                  MethodInfo *method)

{
  int32_t iVar1;
  UnityEngine_Transform_o *pUVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Vector3_o UVar5;
  float local_24;
  
  if (p_a != (Nekki_SF2_GUI_Map_BattleButton_o *)0x0) {
    fVar3 = (__this->fields).currentButtonPos.fields.x;
    fVar4 = (__this->fields).currentButtonPos.fields.y;
    pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)p_a,(MethodInfo *)0x0);
    if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
      UVar5 = UnityEngine_Transform__get_localPosition(pUVar2,(MethodInfo *)0x0);
      if (DAT_04560276 == '\0') {
        FUN_01bab630(UVar5.fields.x,UVar5.fields.y,UVar5.fields.z,&System_Math_TypeInfo);
        DAT_04560276 = '\x01';
      }
      fVar3 = fVar3 - UVar5.fields.x;
      fVar4 = fVar4 - UVar5.fields.y;
      if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      local_24 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
      if (p_b != (Nekki_SF2_GUI_Map_BattleButton_o *)0x0) {
        fVar3 = (__this->fields).currentButtonPos.fields.x;
        fVar4 = (__this->fields).currentButtonPos.fields.y;
        pUVar2 = UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)p_b,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          UVar5 = UnityEngine_Transform__get_localPosition(pUVar2,(MethodInfo *)0x0);
          if (DAT_04560276 == '\0') {
            FUN_01bab630(UVar5.fields.x,UVar5.fields.y,UVar5.fields.z,&System_Math_TypeInfo);
            DAT_04560276 = '\x01';
          }
          fVar3 = fVar3 - UVar5.fields.x;
          fVar4 = fVar4 - UVar5.fields.y;
          if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564();
          }
          fVar4 = fVar4 * fVar4;
          iVar1 = System_Single__CompareTo
                            (SQRT(fVar3 * fVar3 + fVar4),fVar4,(MethodInfo *)&local_24);
          return iVar1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x3348F54]
// Nekki.SF2.GUI.Map.ZoneScrollItem.AMFEOIAGFAK$$.ctor @ RVA 0x3348F54

void Nekki_SF2_GUI_Map_ZoneScrollItem_AMFEOIAGFAK___ctor
               (Nekki_SF2_GUI_Map_ZoneScrollItem_AMFEOIAGFAK_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

