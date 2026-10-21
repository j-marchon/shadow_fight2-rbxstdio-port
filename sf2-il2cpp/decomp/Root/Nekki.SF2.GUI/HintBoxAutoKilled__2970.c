// TypeDefIndex 2970
// Namespace: Nekki.SF2.GUI
// public class HintBoxAutoKilled : HintBox
// Fields:
//   private float DHJNHIHGFNJ; // 0x5C

// ===== public float get_LiveTime()  [RVA 0x349FAF4]
// Nekki.SF2.GUI.HintBoxAutoKilled$$get_LiveTime @ RVA 0x349FAF4

float Nekki_SF2_GUI_HintBoxAutoKilled__get_LiveTime
                (Nekki_SF2_GUI_HintBoxAutoKilled_o *__this,MethodInfo *method)

{
  return *(float *)&(__this->fields).super.field_0x4c;
}


// ===== public void set_LiveTime(float CJNHFNHJHPE)  [RVA 0x349FAFC]
// Nekki.SF2.GUI.HintBoxAutoKilled$$set_LiveTime @ RVA 0x349FAFC

void Nekki_SF2_GUI_HintBoxAutoKilled__set_LiveTime
               (Nekki_SF2_GUI_HintBoxAutoKilled_o *__this,float CJNHFNHJHPE,MethodInfo *method)

{
  *(float *)&(__this->fields).super.field_0x4c = CJNHFNHJHPE;
  return;
}


// ===== protected override void Update()  [RVA 0x349FB04]
// Nekki.SF2.GUI.HintBoxAutoKilled$$Update @ RVA 0x349FB04

void Nekki_SF2_GUI_HintBoxAutoKilled__Update
               (Nekki_SF2_GUI_HintBoxAutoKilled_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *LAIGNDBNBJG;
  float fVar2;
  float fVar3;
  
  Nekki_SF2_GUI_HintBox__Update((Nekki_SF2_GUI_HintBox_o *)__this,(MethodInfo *)0x0);
  bVar1 = UnityEngine_Input__get_anyKeyDown((MethodInfo *)0x0);
  if ((bVar1) || (fVar3 = *(float *)&(__this->fields).super.field_0x4c, fVar3 <= 0.0)) {
    LAIGNDBNBJG = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    Util__JODGPLBHHIA(LAIGNDBNBJG,false,(MethodInfo *)0x0);
    fVar3 = *(float *)&(__this->fields).super.field_0x4c;
  }
  fVar2 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
  *(float *)&(__this->fields).super.field_0x4c = fVar3 - fVar2;
  return;
}


// ===== public override void Init(float NMFKJBOAOLK = -1, float DAPHCPICAAC = -1)  [RVA 0x349FB68]
// Nekki.SF2.GUI.HintBoxAutoKilled$$Init @ RVA 0x349FB68

void Nekki_SF2_GUI_HintBoxAutoKilled__Init
               (Nekki_SF2_GUI_HintBoxAutoKilled_o *__this,float NMFKJBOAOLK,float DAPHCPICAAC,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  Nekki_SF2_GUI_HintBox__Init
            ((Nekki_SF2_GUI_HintBox_o *)__this,NMFKJBOAOLK,DAPHCPICAAC,(MethodInfo *)0x0);
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public static HintBoxAutoKilled Build(GameObject DKIDCBPNMPD, Transform HOKHHGFLMNA, Vector3 HHPABFGHALF, float NMFOKOIDMBF, float NMFKJBOAOLK = -1, float DAPHCPICAAC = -1)  [RVA 0x349FB9C]
// Nekki.SF2.GUI.HintBoxAutoKilled$$Build @ RVA 0x349FB9C

Nekki_SF2_GUI_HintBoxAutoKilled_o *
Nekki_SF2_GUI_HintBoxAutoKilled__Build
          (UnityEngine_GameObject_o *DKIDCBPNMPD,UnityEngine_Transform_o *HOKHHGFLMNA,
          UnityEngine_Vector3_o HHPABFGHALF,float NMFOKOIDMBF,float NMFKJBOAOLK,float DAPHCPICAAC,
          MethodInfo *method)

{
  UnityEngine_Quaternion_Fields rotation;
  UnityEngine_GameObject_o *__this;
  Nekki_SF2_GUI_HintBoxAutoKilled_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  undefined4 in_register_00005084;
  
  if ((DAT_0456848e & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_GameObject_GetComponent<HintBoxAutoKilled>__);
    FUN_01bab630(&Method_UnityEngine_Object_Instantiate<GameObject>__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_0456848e = 1;
  }
  if (DAT_0455fa79 == '\0') {
    FUN_01bab630(&UnityEngine_Quaternion_TypeInfo);
    DAT_0455fa79 = '\x01';
  }
  rotation = *(UnityEngine_Quaternion_Fields *)UnityEngine_Quaternion_TypeInfo->static_fields;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this = (UnityEngine_GameObject_o *)
           UnityEngine_Object__Instantiate<object>
                     ((Il2CppObject *)DKIDCBPNMPD,HHPABFGHALF,(UnityEngine_Quaternion_o)rotation,
                      HOKHHGFLMNA,Method_UnityEngine_Object_Instantiate<GameObject>__);
  if (((__this != (UnityEngine_GameObject_o *)0x0) &&
      (__this_00 = (Nekki_SF2_GUI_HintBoxAutoKilled_o *)
                   UnityEngine_GameObject__GetComponent<object>
                             (__this,Method_UnityEngine_GameObject_GetComponent<HintBoxAutoKilled>__
                             ), __this_00 != (Nekki_SF2_GUI_HintBoxAutoKilled_o *)0x0)) &&
     (__this_01 = UnityEngine_Component__get_transform
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0),
     __this_01 != (UnityEngine_Transform_o *)0x0)) {
    UnityEngine_Transform__SetAsLastSibling(__this_01,(MethodInfo *)0x0);
    (*(__this_00->klass->vtable)._4_Init.methodPtr)
              (CONCAT44(in_register_00005084,NMFKJBOAOLK),(ulong)(uint)DAPHCPICAAC,__this_00,
               (__this_00->klass->vtable)._4_Init.method);
    *(float *)&(__this_00->fields).super.field_0x4c = NMFOKOIDMBF;
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetDescAlias(string DIHAKADKIKM)  [RVA 0x349FD08]
// Nekki.SF2.GUI.HintBoxAutoKilled$$SetDescAlias @ RVA 0x349FD08

void Nekki_SF2_GUI_HintBoxAutoKilled__SetDescAlias
               (Nekki_SF2_GUI_HintBoxAutoKilled_o *__this,System_String_o *DIHAKADKIKM,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *__this_00;
  
  __this_00 = (__this->fields).super._Description;
  if (__this_00 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
    Nekki_SF2_GUI_LabelAlias__set_Alias(__this_00,DIHAKADKIKM,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void SetDescText(string DIHAKADKIKM)  [RVA 0x349FD24]
// Nekki.SF2.GUI.HintBoxAutoKilled$$SetDescText @ RVA 0x349FD24

void Nekki_SF2_GUI_HintBoxAutoKilled__SetDescText
               (Nekki_SF2_GUI_HintBoxAutoKilled_o *__this,System_String_o *DIHAKADKIKM,
               MethodInfo *method)

{
  Nekki_SF2_GUI_LabelAlias_o *pNVar1;
  
  pNVar1 = (__this->fields).super._Description;
  if (pNVar1 != (Nekki_SF2_GUI_LabelAlias_o *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0359fd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pNVar1->klass->vtable)._75_set_text.methodPtr)
              (pNVar1,DIHAKADKIKM,(pNVar1->klass->vtable)._75_set_text.method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x349FD48]
// Nekki.SF2.GUI.HintBoxAutoKilled$$.ctor @ RVA 0x349FD48

void Nekki_SF2_GUI_HintBoxAutoKilled___ctor
               (Nekki_SF2_GUI_HintBoxAutoKilled_o *__this,MethodInfo *method)

{
  *(undefined4 *)&(__this->fields).super.field_0x4c = 0x40400000;
  Nekki_SF2_GUI_HintBox___ctor((Nekki_SF2_GUI_HintBox_o *)__this,(MethodInfo *)0x0);
  return;
}

