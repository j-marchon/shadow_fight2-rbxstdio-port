// IJCLCKIJJDH$$FAKAFGPJOIG @ RVA 0x3530AB4

bool IJCLCKIJJDH__FAKAFGPJOIG(IJCLCKIJJDH_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Nullable_float__o *__this_00;
  float fVar2;
  float fVar3;
  
  if ((DAT_04568a5b & 1) == 0) {
    FUN_01bab630(&Method_System_Nullable<float>_get_HasValue__);
    FUN_01bab630(&Method_System_Nullable<float>_get_Value__);
    DAT_04568a5b = 1;
  }
  __this_00 = &(__this->fields).OGMPOBAGDMG;
  if ((__this_00->fields).hasValue == false) {
    bVar1 = true;
  }
  else {
    fVar2 = UnityEngine_Time__get_realtimeSinceStartup((MethodInfo *)0x0);
    fVar3 = System_Nullable<float>__get_Value
                      ((System_Nullable_float__o)__this_00,Method_System_Nullable<float>_get_Value__
                      );
    bVar1 = fVar3 < fVar2;
  }
  return bVar1;
}

