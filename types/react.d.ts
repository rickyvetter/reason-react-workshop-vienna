export namespace Children {
    function count(children: any): any;
    function forEach(children: any, forEachFunc: any, forEachContext: any): any;
    function map(children: any, func: any, context: any): any;
    function only(children: any): any;
    function toArray(children: any): any;
}
export class Component {
    constructor(props: any, context: any, updater: any);
    props: any;
    context: any;
    refs: any;
    updater: any;
    forceUpdate(callback: any): void;
    setState(partialState: any, callback: any): void;
}
export const Fragment: symbol;
export class PureComponent {
    constructor(props: any, context: any, updater: any);
    props: any;
    context: any;
    refs: any;
    updater: any;
    forceUpdate(callback: any): void;
    setState(partialState: any, callback: any): void;
}
export const StrictMode: symbol;
export const Suspense: symbol;
export function cloneElement(element: any, props: any, children: any, ...args: any[]): any;
export function createContext(defaultValue: any, calculateChangedBits: any): any;
export function createElement(type: any, props: any, children: any, ...args: any[]): any;
export function createFactory(type: any): any;
export function createRef(): any;
export function forwardRef(render: any): any;
export function isValidElement(object: any): any;
export function lazy(ctor: any): any;
export function memo(type: any, compare: any): any;
export const unstable_ConcurrentMode: symbol;
export const unstable_Profiler: symbol;
export const version: string;
