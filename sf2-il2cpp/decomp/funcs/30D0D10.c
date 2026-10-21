// Nekki.SF2.GUI.ItemsScroll$$ScrollToItem @ RVA 0x30D0D10

void Nekki_SF2_GUI_ItemsScroll__ScrollToItem
               (Nekki_SF2_GUI_ItemsScroll_o *__this,Nekki_SF2_GUI_BaseScrollItem_o *IKKAMAMLIKA,
               float PNEIGGOFIOA,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  Nekki_SF2_GUI_BaseScrollContent_o *__this_00;
  UnityEngine_Events_UnityEvent_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar2;
  undefined4 extraout_var;
  undefined8 in_d1;
  undefined8 uVar3;
  undefined8 in_d2;
  undefined4 uVar5;
  float fVar6;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Vector2_o EMPKHNEPHPO;
  UnityEngine_Vector2_o EMPKHNEPHPO_00;
  undefined4 uVar4;
  
  uVar5 = (undefined4)((ulong)in_d2 >> 0x20);
  uVar4 = (undefined4)((ulong)in_d1 >> 0x20);
  if ((__this->fields).CLEJOEBNAHF != false) {
    return;
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    UVar7 = UnityEngine_Transform__get_position(pUVar1,(MethodInfo *)0x0);
    uVar3 = CONCAT44(uVar4,UVar7.fields.y);
    if (IKKAMAMLIKA != (Nekki_SF2_GUI_BaseScrollItem_o *)0x0) {
      fVar2 = (float)(*(IKKAMAMLIKA->klass->vtable)._45_get_CenterPosition.methodPtr)
                               (CONCAT44(extraout_var,UVar7.fields.x),uVar3,
                                CONCAT44(uVar5,UVar7.fields.z),IKKAMAMLIKA,
                                (IKKAMAMLIKA->klass->vtable)._45_get_CenterPosition.method);
      __this_00 = (__this->fields).scrollContent;
      if ((__this_00 != (Nekki_SF2_GUI_BaseScrollContent_o *)0x0) &&
         (pUVar1 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
         pUVar1 != (UnityEngine_Transform_o *)0x0)) {
        UVar8 = UnityEngine_Transform__get_position(pUVar1,(MethodInfo *)0x0);
        fVar6 = (UVar7.fields.x - fVar2) + UVar8.fields.x;
        fVar2 = (UVar7.fields.y - (float)uVar3) + UVar8.fields.y;
        if (0.001 < PNEIGGOFIOA) {
          (*(__this->klass->vtable)._44_StopMovement.methodPtr)
                    (__this,(__this->klass->vtable)._44_StopMovement.method);
          EMPKHNEPHPO.fields.y = fVar2;
          EMPKHNEPHPO.fields.x = fVar6;
          Nekki_SF2_GUI_ItemsScroll__MGGKMCMKAPB(__this,EMPKHNEPHPO,PNEIGGOFIOA,method_01);
          return;
        }
        EMPKHNEPHPO_00.fields.y = fVar2;
        EMPKHNEPHPO_00.fields.x = fVar6;
        Nekki_SF2_GUI_ItemsScroll__KKMNFLPCAHN(__this,EMPKHNEPHPO_00,method_00);
        __this_01 = (UnityEngine_Events_UnityEvent_o *)(__this->fields).onScrollEnd;
        if (__this_01 != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__Invoke(__this_01,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x031d0e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(__this->klass->vtable)._44_StopMovement.methodPtr)
                    (__this,(__this->klass->vtable)._44_StopMovement.method);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

