// WideScreenController$$ShouldRenderBorders @ RVA 0x31E915C

bool WideScreenController__ShouldRenderBorders(MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  
  iVar1 = UnityEngine_Screen__get_width((MethodInfo *)0x0);
  iVar2 = UnityEngine_Screen__get_height((MethodInfo *)0x0);
  return 1.7777778 < (float)iVar1 / (float)iVar2;
}

