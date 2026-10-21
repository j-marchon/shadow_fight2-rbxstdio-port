// Original name: Nekki.SF2.Core.Fights.Model.Animation.Moves.Actions.ActionEnableBossAbility  (obfuscated ANBKLGFGGFH)
// TypeDefIndex 1325
// Namespace: 
// public class ActionEnableBossAbility : ActionAnimation
// Fields:
//   private bool JGFKHMMNJBA; // 0x44

// ===== public bool CNKOOLDMAGC()  [RVA 0x315C39C]
// ActionEnableBossAbility$$CNKOOLDMAGC @ RVA 0x315C39C

bool ActionEnableBossAbility__CNKOOLDMAGC(ActionEnableBossAbility_o *__this,MethodInfo *method)

{
  return (bool)(__this->fields).super.field_0x34;
}


// ===== public override void DPGIIHOJJDE(Model BCKBBGCOMJD)  [RVA 0x315C3A4]
// ActionEnableBossAbility$$DPGIIHOJJDE @ RVA 0x315C3A4

void ActionEnableBossAbility__DPGIIHOJJDE(ActionEnableBossAbility_o *__this,Model_o *BCKBBGCOMJD,MethodInfo *method)

{
  undefined8 *puVar1;
  System_String_o *message;
  
  if ((DAT_0456686c & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&StringLiteral_15419/*"[ActionEnableBossAbility]: Value="*/);
    FUN_01bab630(&StringLiteral_1606/*"1"*/);
    FUN_01bab630(&StringLiteral_1567/*"0"*/);
    DAT_0456686c = 1;
  }
  puVar1 = &StringLiteral_1567/*"0"*/;
  if ((__this->fields).super.field_0x34 != '\0') {
    puVar1 = &StringLiteral_1606/*"1"*/;
  }
  message = System_String__Concat(StringLiteral_15419/*"[ActionEnableBossAbility]: Value="*/,(System_String_o *)*puVar1,(MethodInfo *)0x0);
  if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__Log((Il2CppObject *)message,(MethodInfo *)0x0);
  if (BCKBBGCOMJD != (Model_o *)0x0) {
    Model__AHNAGGGOLBK(BCKBBGCOMJD,__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== protected override void HNIHOIAMDPC(XmlNode AHDGNOJPPIB)  [RVA 0x315C488]
// ActionEnableBossAbility$$HNIHOIAMDPC @ RVA 0x315C488

void ActionEnableBossAbility__HNIHOIAMDPC
               (ActionEnableBossAbility_o *__this,System_Xml_XmlNode_o *AHDGNOJPPIB,MethodInfo *method)

{
  bool bVar1;
  System_Xml_XmlAttributeCollection_o *__this_00;
  System_Xml_XmlAttribute_o *LBJNDMNEJJB;
  
  if ((DAT_0456686d & 1) == 0) {
    FUN_01bab630(&StringLiteral_14694/*"Value"*/);
    DAT_0456686d = 1;
  }
  ActionAnimation__HNIHOIAMDPC((ActionAnimation_o *)__this,AHDGNOJPPIB,(MethodInfo *)0x0);
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    __this_00 = (System_Xml_XmlAttributeCollection_o *)
                (*(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.methodPtr)
                          (AHDGNOJPPIB,(AHDGNOJPPIB->klass->vtable)._16_get_Attributes.method);
    if (__this_00 != (System_Xml_XmlAttributeCollection_o *)0x0) {
      LBJNDMNEJJB = System_Xml_XmlAttributeCollection__get_ItemOf
                              (__this_00,StringLiteral_14694/*"Value"*/,(MethodInfo *)0x0);
      bVar1 = EIABCPKDEBD__FMBMNDIGLIG(LBJNDMNEJJB,false,(MethodInfo *)0x0);
      (__this->fields).super.field_0x34 = bVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(XmlNode JHMENEKPIBO)  [RVA 0x315C51C]
// ActionEnableBossAbility$$.ctor @ RVA 0x315C51C

void ActionEnableBossAbility___ctor(ActionEnableBossAbility_o *__this,System_Xml_XmlNode_o *JHMENEKPIBO,MethodInfo *method)

{
  ActionAnimation___ctor((ActionAnimation_o *)__this,0xe,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0325c550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._5_HNIHOIAMDPC.methodPtr)
            (__this,JHMENEKPIBO,(__this->klass->vtable)._5_HNIHOIAMDPC.method);
  return;
}

