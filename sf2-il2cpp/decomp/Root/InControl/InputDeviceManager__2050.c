// TypeDefIndex 2050
// Namespace: InControl
// public class InputDeviceManager
// Fields:
//   protected List<InputDevice> devices; // 0x10

// ===== public virtual void EnsureDeviceCount()  [RVA 0x32B515C]
// InControl.InputDeviceManager$$EnsureDeviceCount @ RVA 0x32B515C

void InControl_InputDeviceManager__EnsureDeviceCount
               (InControl_InputDeviceManager_o *__this,MethodInfo *method)

{
  return;
}


// ===== public virtual void OnDeviceCountChanged()  [RVA 0x32B5160]
// InControl.InputDeviceManager$$OnDeviceCountChanged @ RVA 0x32B5160

void InControl_InputDeviceManager__OnDeviceCountChanged
               (InControl_InputDeviceManager_o *__this,MethodInfo *method)

{
  return;
}


// ===== public virtual void SetSingleMode()  [RVA 0x32B5164]
// InControl.InputDeviceManager$$SetSingleMode @ RVA 0x32B5164

void InControl_InputDeviceManager__SetSingleMode
               (InControl_InputDeviceManager_o *__this,MethodInfo *method)

{
  return;
}


// ===== public virtual void SetDualMode()  [RVA 0x32B5168]
// InControl.InputDeviceManager$$SetDualMode @ RVA 0x32B5168

void InControl_InputDeviceManager__SetDualMode
               (InControl_InputDeviceManager_o *__this,MethodInfo *method)

{
  return;
}


// ===== public virtual void Update(ulong updateTick, float deltaTime)  [RVA 0x32B516C]
// InControl.InputDeviceManager$$Update @ RVA 0x32B516C

void InControl_InputDeviceManager__Update
               (InControl_InputDeviceManager_o *__this,uint64_t updateTick,float deltaTime,
               MethodInfo *method)

{
  return;
}


// ===== public virtual void PostUpdate(float deltaTime)  [RVA 0x32B5170]
// InControl.InputDeviceManager$$PostUpdate @ RVA 0x32B5170

void InControl_InputDeviceManager__PostUpdate
               (InControl_InputDeviceManager_o *__this,float deltaTime,MethodInfo *method)

{
  return;
}


// ===== public void .ctor()  [RVA 0x32B5174]
// InControl.InputDeviceManager$$.ctor @ RVA 0x32B5174

void InControl_InputDeviceManager___ctor(InControl_InputDeviceManager_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_InputDevice__o *__this_00;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456744a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<InputDevice>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<InputDevice>_TypeInfo);
    DAT_0456744a = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_InputDevice__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<InputDevice>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<InputDevice>__ctor__);
  (__this->fields).devices = __this_00;
  thunk_FUN_01c20e04(&__this->fields,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

