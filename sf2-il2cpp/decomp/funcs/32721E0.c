// Nekki.SF2.GUI.StrikeThroughTextLine$$Awake @ RVA 0x32721E0

void Nekki_SF2_GUI_StrikeThroughTextLine__Awake
               (Nekki_SF2_GUI_StrikeThroughTextLine_o *__this,MethodInfo *method)

{
  UnityEngine_Shader_o *shader;
  UnityEngine_Material_o *__this_00;
  
  if ((DAT_0456722e & 1) == 0) {
    FUN_01bab630(&UnityEngine_Material_TypeInfo);
    FUN_01bab630(&StringLiteral_14098);
    DAT_0456722e = 1;
  }
  UnityEngine_EventSystems_UIBehaviour__Awake
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  shader = UnityEngine_Shader__Find(StringLiteral_14098,(MethodInfo *)0x0);
  __this_00 = (UnityEngine_Material_o *)thunk_FUN_01bda818(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor(__this_00,shader,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._33_set_material.methodPtr)
            (__this,__this_00,(__this->klass->vtable)._33_set_material.method);
  (*(__this->klass->vtable)._23_set_color.methodPtr)
            (0x3f800000,0x3f800000,0x3f800000,0x3f800000,__this,
             (__this->klass->vtable)._23_set_color.method);
                    /* WARNING: Could not recover jumptable at 0x033722c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(__this->klass->vtable)._25_set_raycastTarget.methodPtr)
            (__this,0,(__this->klass->vtable)._25_set_raycastTarget.method);
  return;
}

